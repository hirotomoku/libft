/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitakase </var/mail/hitakase>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:44:27 by hitakase          #+#    #+#             */
/*   Updated: 2022/04/19 18:25:32 by hitakase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int nb)
{
	int	i;

	i = 0;
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr2(int nb, int fd)
{
	int	cp;
	int	power;
	int	onc;

	cp = 1;
	power = ft_digits(nb);
	while (1 <= power)
	{
		cp *= 10;
		power--;
	}
	onc = nb;
	while (cp > 0)
	{
		onc = nb / cp;
		nb = nb % cp;
		cp = cp / 10;
		ft_putchar_fd(onc + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10)
		ft_putnbr2(n, fd);
	else if (n >= 0 && n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		if (n == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		else
		{
			ft_putchar_fd('-', fd);
			n = -1 * n;
			ft_putnbr2(n, fd);
		}
	}
}
