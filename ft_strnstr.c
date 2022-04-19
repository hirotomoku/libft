/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:31:09 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/19 13:58:35 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	h;

	i = 0;
	h = 0;
	if (n == 0 && str == NULL)
		return (NULL);
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[h])
		{
			while (to_find[h] != '\0' && str[h + i] == to_find[h] && h + i < n)
			{
				if (to_find[h + 1] == '\0')
					return ((char *)&str[i]);
				h++;
			}
		}
		h = 0;
		i++;
	}
	return (NULL);
}
