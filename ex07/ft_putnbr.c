/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:56:10 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/27 11:16:16 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int nb)
{
	int	cnt;
	int	div;

	cnt = 0;
	div = 1;
	while (nb % div != nb)
	{
		cnt = cnt + 1;
		div = div * 10;
	}
	while (cnt > 0)
	{
		div = div / 10;
		ft_putchar((nb / div) % 10 + '0');
		cnt--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb > 0)
	{
		ft_putint(nb);
	}
}
