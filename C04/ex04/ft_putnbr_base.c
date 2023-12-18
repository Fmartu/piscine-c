/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:25:28 by fmartusc          #+#    #+#             */
/*   Updated: 2023/12/17 13:28:58 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_check_4_errors(char *base, int *error);

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbase;
	int		error;
	long	i;

	nbase = 0;
	error = 0;
	ft_check_4_errors(base, &error);
	i = nbr;
	if (error == 0)
	{
		if (i < 0)
		{
			ft_putchar('-');
			i *= -1;
		}
		while (base[nbase])
			nbase++;
		if (i < nbase)
			ft_putchar(base[i]);
		if (i >= nbase)
		{
			ft_putnbr_base(i / nbase, base);
			ft_putnbr_base(i % nbase, base);
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_4_errors(char *base, int *error)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*error = 1;
	while (base[i] && *error == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*error = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*error = 1;
		else
			i++;
	}
}
