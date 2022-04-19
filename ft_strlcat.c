/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:28:31 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/19 18:28:34 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	if (dstsize == 0 && src != NULL)
		return (ft_strlen(src) + dstsize);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dstsize <= dest_len)
		return (src_len + dstsize);
	i = 0;
	while (src[i] != '\0' && dest_len + i < dstsize - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
