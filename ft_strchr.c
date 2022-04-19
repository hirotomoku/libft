/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:27:57 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/09 19:27:59 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	change;
	char	*henkan;
	size_t	i;

	change = (char)c;
	henkan = (char *)str;
	i = 0;
	if (change == '\0')
		return (henkan + ft_strlen(str));
	while (henkan[i] != '\0')
	{
		if (henkan[i] == change)
			return (&henkan[i]);
		i++;
	}
	return (NULL);
}
