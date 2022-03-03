/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:16:52 by masantos          #+#    #+#             */
/*   Updated: 2022/03/02 18:11:03 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	aux;

	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		aux = nb * ft_recursive_power(nb, power - 1);
	return (aux);
}

/*#include <stdio.h>
int	main(void)
{
	int nb = -2;
	int	power = 3;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
*/
