/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:19:16 by masantos          #+#    #+#             */
/*   Updated: 2022/02/24 19:22:24 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] > 126)
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[]="á";

	int a = ft_str_is_printable(str);
	printf("%d", a);
	return (0);
}
*/
