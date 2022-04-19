/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:24:15 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/09 19:24:19 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	unsigned char	*change;
	unsigned char	c2;
	size_t			i;

	change = (unsigned char *)buf;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (change[i] == c2)
			return ((void *)&change[i]);
		i++;
	}
	return (NULL);
}
