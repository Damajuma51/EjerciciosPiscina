/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:28:32 by masantos          #+#    #+#             */
/*   Updated: 2022/03/01 20:03:48 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\r' || *str == '\v' || *str == '+')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && found)
	{
		if (*str >= '0' && *str <= '9')
			sum = sum * 10 + (*str - '0');
		else
			found = 0;
		str++;
	}
	return (sign * sum);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str = "---+--+1234ab5674";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
}*/
