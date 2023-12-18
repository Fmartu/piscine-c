/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:11:51 by fmartusc          #+#    #+#             */
/*   Updated: 2023/12/06 11:24:34 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	swp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		swp = tab[first];
		tab[first] = tab[last];
		tab[last] = swp;
		first++;
		last--;
	}
}
