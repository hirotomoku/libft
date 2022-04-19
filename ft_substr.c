/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:45:03 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/15 20:45:21 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	start2;

	if (s == NULL)
		return (NULL);
	start2 = (size_t)start;
	i = 0;
	if (start2 >= ft_strlen((char *)s) || len == 0)
		return (ft_strdup(""));
	if (len >= ft_strlen((char *)s) - start2)
		len = ft_strlen((char *)s) - start2;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (s[start2] != '\0' && i < len)
	{
		p[i] = s[start2];
		i++;
		start2++;
	}
	p[i] = '\0';
	return (p);
}
