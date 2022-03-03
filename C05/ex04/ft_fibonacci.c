/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:37:27 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 17:22:28 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	aux;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	aux = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (aux);
}

/*#include <stdio.h>
int	main(void)
{
	int	index = 10;
	printf("%d", ft_fibonacci(index));
	return (0);
}
*/
