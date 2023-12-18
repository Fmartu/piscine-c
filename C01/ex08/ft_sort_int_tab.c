/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:02:44 by fmartusc          #+#    #+#             */
/*   Updated: 2023/12/06 11:36:18 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	j = 0;
	min = 0;
	while (i < size)
	{
		j = size - 1;
		while (j > i)
		{
			if (tab[j] < tab[j -1])
			{
				min = tab[j];
				tab[j] = tab[j -1];
				tab[j -1] = min;
			}
			j = j - 1;
		}
		i = i + 1;
	}
}
