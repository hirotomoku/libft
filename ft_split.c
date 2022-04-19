/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:27:28 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/19 18:26:33 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_strcopy(char *newstr, const char *s, size_t *p_cp, size_t count)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = *p_cp - count;
	while (i < count)
	{
		newstr[i] = s[k];
		i++;
		k++;
	}
	newstr[i] = '\0';
	return (newstr);
}

static int	ft_mozisu(char const *s, char c, size_t *p_cp)
{
	size_t	count;
	size_t	cp;

	cp = *p_cp;
	count = 0;
	while (s[cp] == c)
		cp++;
	while (s[cp] != c && s[cp] != '\0')
	{
		count++;
		cp++;
	}
	*p_cp = cp;
	return (count);
}

static size_t	ft_check(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (s[i + 1] == c)
				count--;
			count++;
		}
		i++;
	}
	if (s[0] != c && s[i - 1] != c)
		return (count + 1);
	else if (s[0] == c && s[i - 1] == c)
		return (count + 1 - 2);
	else
		return (count);
}

static char	**ft_free_b_all(char **nizigen)
{
	size_t	i;

	i = 0;
	while (nizigen[i])
	{
		free(nizigen[i]);
		i++;
	}
	free(nizigen);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**nizigen;
	size_t		cp;
	size_t		*p_cp;
	size_t		i;
	size_t		count;

	p_cp = &cp;
	i = 0;
	cp = 0;
	if (s == NULL)
		return (NULL);
	nizigen = (char **)malloc(sizeof(char *) * (ft_check(s, c) + 1));
	if (nizigen == NULL)
		return (NULL);
	while (i < ft_check(s, c))
	{
		count = ft_mozisu(s, c, p_cp);
		nizigen[i] = (char *)malloc(sizeof(char) * (count + 1));
		if (nizigen[i] == NULL)
			return (ft_free_b_all(nizigen));
		ft_strcopy(nizigen[i], s, p_cp, count);
		i++;
	}
	nizigen[i] = NULL;
	return (nizigen);
}
