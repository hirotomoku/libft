/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:18:17 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/19 18:24:53 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*myputstr(char *p, int amari, size_t i, int digit_z)
{
	int		kazu;

	while (digit_z > 0)
	{
		kazu = amari / digit_z;
		amari = amari % digit_z;
		p[i] = kazu + '0';
		digit_z /= 10;
		i++;
	}
	p[i] = '\0';
	return (p);
}

static char	*ft_henkan_minus(int n, size_t i)
{
	int		digit;
	int		digit_z;
	int		amari;
	char	*p;

	amari = n;
	digit = 1;
	digit_z = 1;
	while (n >= 10)
	{
		n = n / 10;
		digit++;
		digit_z *= 10;
	}
	p = (char *)malloc(sizeof(char) * (digit + 2));
	if (p == NULL)
		return (NULL);
	p[0] = '-';
	p = myputstr(p, amari, i, digit_z);
	return (p);
}

static char	*ft_henkan_pulus(int n, size_t i)
{
	int		digit;
	int		digit_z;
	int		amari;
	char	*p;

	amari = n;
	digit = 1;
	digit_z = 1;
	while (n >= 10)
	{
		n = n / 10;
		digit++;
		digit_z *= 10;
	}
	p = (char *)malloc(sizeof(char) * (digit + 1));
	if (p == NULL)
		return (NULL);
	p = myputstr(p, amari, i, digit_z);
	return (p);
}

static char	*ft_int_min(void)
{
	char	*newstr;
	char	*int_min;
	size_t	i;

	i = 0;
	int_min = "-2147483648";
	newstr = (char *)malloc(12);
	if (newstr == NULL)
		return (NULL);
	while (i < 12)
	{
		newstr[i] = int_min[i];
		i++;
	}
	return (newstr);
}

char	*ft_itoa(int n)
{
	size_t		i;
	char		*p;

	if (n == -2147483648)
		p = ft_int_min();
	else if (n == 0)
	{
		p = (char *)malloc(sizeof(char) * 2);
		if (p == NULL)
			return (NULL);
		p[0] = '0';
		p[1] = '\0';
	}
	else if (n > 0)
	{
		i = 0;
		p = ft_henkan_pulus(n, i);
	}
	else
	{
		i = 1;
		n = n * -1;
		p = ft_henkan_minus(n, i);
	}
	return (p);
}
