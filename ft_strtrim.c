/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:45:56 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/19 18:27:00 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkpoint(char s, char const *set)
{
	size_t	i;
	char	*p;

	p = (char *)set;
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	j = ft_strlen((char *)s1) - 1;
	while (s1[i] != '\0')
	{
		if (ft_checkpoint(s1[i], set) == 0)
			break ;
		i++;
	}
	while (i <= j)
	{
		if (ft_checkpoint(s1[j], set) == 0)
			break ;
		j--;
	}
	newstr = ft_substr(s1, i, j - i + 1);
	return (newstr);
}
