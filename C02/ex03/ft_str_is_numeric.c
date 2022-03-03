/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:40:17 by masantos          #+#    #+#             */
/*   Updated: 2022/02/24 13:49:42 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "0123456789";
	int		res = ft_str_is_numeric(str);
	printf("%d", res);
	return (0);	
}
*/
