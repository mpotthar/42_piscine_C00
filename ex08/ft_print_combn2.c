/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:48:47 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/27 09:44:53 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_outputarr(int array[], int n, int last)
{
	int	posit;

	posit = 0;
	while (posit < n)
	{
		ft_putchar((array[posit] + '0'));
		posit++;
	}
	if (last == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_counter(int array[], int n, int pos)
{
	while (array[0] < (10 - n) || array[n - 1] != 9)
	{
		while (array[n - pos] < 10 - pos)
		{
			array[n - pos]++;
			ft_outputarr(array, n, 0);
		}
		if (array[n - pos] == 10 - pos)
		{
			pos++;
			array[n - pos]++;
		}
		if (array[n - pos] < 10 - pos)
		{
			while (pos > 1)
			{
			pos--;
			array[n - pos] = array[(n - pos - 1)] + 1;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int	array[8];
	int	count;
	int	pos;

	count = 0;
	while (count < n)
	{
		array[count] = count;
		count++;
	}
	ft_outputarr(array, n, 0);
	pos = 1;
	ft_counter(array, n, pos);
	ft_outputarr(array, n, 1);
}
