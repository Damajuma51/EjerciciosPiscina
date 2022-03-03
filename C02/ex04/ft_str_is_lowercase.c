/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:57:51 by masantos          #+#    #+#             */
/*   Updated: 2022/02/24 12:53:54 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'a' || str[index] > 'z')
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[]="aasdasda5sdasdasd";

	int a = ft_str_is_lowercase(str);
	printf("%d", a);
	return (0);
}
*/
