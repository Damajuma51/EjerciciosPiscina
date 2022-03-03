/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:35:08 by masantos          #+#    #+#             */
/*   Updated: 2022/02/24 13:51:16 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "AEIOU";
	int		aux = 0;

	ft_strupcase(str);
	while (str[aux] != '\0')
	{
		printf("%c", str[aux]);
		aux++;
	}
	return (0);
}
*/
