/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:04:56 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 19:00:43 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	split_number(int a)
{
	char	num[2];

	num[0] = a / 10 + '0';
	num[1] = a % 10 + '0';
	write(1, num, 2);
}

void	ft_print_comb2(void)
{
	int	cont1;
	int	cont2;

	cont1 = 0;
	cont2 = 0;
	while (cont1 <= 98)
	{
		while (cont2 <= 99)
		{
			if ((cont1 != cont2) && (cont2 > cont1))
			{
				split_number(cont1);
				write(1, " ", 1);
				split_number(cont2);
				if (cont1 != 98)
				{
					write(1, ", ", 2);
				}
			}
			cont2++;
		}
		cont2 = cont1;
		cont1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
