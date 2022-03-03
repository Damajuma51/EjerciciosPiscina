/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:17:05 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 19:28:54 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= (nb / 2))
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	int	nb = 37;
	printf("%d", ft_is_prime(nb));
	return (0);
}
*/
