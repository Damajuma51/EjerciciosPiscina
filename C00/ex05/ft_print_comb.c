/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:47:13 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 18:54:07 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char st_num, char nd_num, char rd_num)
{
	write(1, &st_num, 1);
	write(1, &nd_num, 1);
	write(1, &rd_num, 1);
	if (st_num != '7' || nd_num != '8' || rd_num != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	st_num;
	char	nd_num;
	char	rd_num;

	st_num = '0';
	while (st_num <= '7')
	{
		nd_num = st_num + 1;
		while (nd_num <= '8')
		{
			rd_num = nd_num + 1;
			while (rd_num <= '9')
			{
				ft_putchar(st_num, nd_num, rd_num);
				rd_num++;
			}
			nd_num++;
		}
		st_num++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
