/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:39:40 by fmartusc          #+#    #+#             */
/*   Updated: 2023/12/06 10:52:58 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_values(int a, int b, int c, int d)
{
	if ((a * 10 + b) < (c * 10 + d))
	{
		ft_putchar (a + '0');
		ft_putchar (b + '0');
		write (1, " ", 1);
		ft_putchar (c + '0');
		ft_putchar (d + '0');
		if (a * 10 + b != 98)
			write(1, ", ", 2);
	}
}

void	ultimo_ciclo(int a, int b, int c, int d)
{
	while (d <= 9)
	{
		print_values(a, b, c, d);
		d++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				d = 0;
				ultimo_ciclo(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
}
