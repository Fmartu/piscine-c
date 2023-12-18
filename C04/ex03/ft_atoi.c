/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 05:53:13 by fmartusc          #+#    #+#             */
/*   Updated: 2023/12/17 13:26:52 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	changesign;
	int	cnum;
	int	i;

	cnum = 0;
	i = 0;
	changesign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			changesign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		cnum = cnum * 10 + (str[i] - 48);
		i++;
	}
	return (cnum * changesign);
}
