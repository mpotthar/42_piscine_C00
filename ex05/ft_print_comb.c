/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:06:05 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/27 11:13:29 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printcombo(int a, int b, int c)
{
	char	ac;
	char	bc;
	char	cc;

	ac = a + '0';
	bc = b + '0';
	cc = c + '0';
	ft_putchar(ac);
	ft_putchar(bc);
	ft_putchar(cc);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_printcombo(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
