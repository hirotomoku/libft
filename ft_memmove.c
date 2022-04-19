/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 08:57:06 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/10 08:57:21 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	else
	{
		while (++i <= n)
			p1[n - i] = p2[n - i];
	}
	return (dest);
}
