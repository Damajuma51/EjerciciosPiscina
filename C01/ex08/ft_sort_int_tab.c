/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 03:52:16 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 19:38:17 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	count;
	int	current;
	int	next;

	current = 0;
	count = 0;
	while (count < (size - 1))
	{
		next = current + 1;
		while (next < size - 1)
		{
			if (tab[current] > tab[next])
			{
				aux = tab[current];
				tab[current++] = tab[next];
				tab[next++] = aux;
			}
			current++;
			next++;
		}
		current = 0;
		count++;
	}
}
