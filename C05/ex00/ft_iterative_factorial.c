/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:03:57 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 12:47:33 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	aux;
	int	aux2;

	aux2 = 1;
	aux = 0;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (nb >= 2 && nb != 0)
	{
		aux = nb * (nb - 1);
		aux2 *= aux;
		nb -= 2;
	}
	return (aux2);
}

/*#include <stdio.h>
int	main(void)
{
	int res = 6;
	printf("%d\n", ft_iterative_factorial(res));
	return (0);
}
*/
