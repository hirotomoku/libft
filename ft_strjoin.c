/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:44:54 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/10 08:44:59 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*p;
	size_t			i;
	int				h;
	size_t			j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	h = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = (char *)malloc(sizeof(char) * (h + 1));
	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i++] = s2[j++];
	}
	p[i] = '\0';
	return (p);
}
