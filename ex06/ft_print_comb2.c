/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:21:21 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/27 11:05:38 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int i)
{
	char	z;

	z = i / 10 + '0';
	ft_putchar(z);
	z = i % 10 + '0';
	ft_putchar(z);
}

void	ft_printcombo(int a, int b)
{
	ft_putint(a);
	ft_putchar(' ');
	ft_putint(b);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_printcombo(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
