/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:01:24 by masantos          #+#    #+#             */
/*   Updated: 2022/03/02 15:26:08 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	aux;

	aux = 1;
	i = 0;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		aux *= nb;
		i++;
	}
	return (aux);
}

/*#include <stdio.h>
int	main(void)
{
	int	nb = 4;
	int	power = 0;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
*/
