/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:31:26 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/09 19:31:28 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	if ((char)c == '\0')
		return ((char *)str + ft_strlen(str));
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			flag = 1;
		i++;
	}
	if (flag == 1)
	{
		while (1)
		{
			if (str[i] == (char)c)
				return ((char *)&str[i]);
			i--;
		}
	}
	else
		return (NULL);
}
