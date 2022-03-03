/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:13:25 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 19:35:25 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		final_i;
	int		aux;

	i = 0;
	final_i = size - 1;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[final_i];
		tab[final_i] = aux;
		i++;
		final_i--;
	}
}
