/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:47:51 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/19 18:15:14 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	h;
	char	*p;

	h = 0;
	i = ft_strlen((char *)str);
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	while (str[h] != '\0')
	{
		p[h] = str[h];
		h++;
	}
	p[h] = '\0';
	return (p);
}
