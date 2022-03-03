/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:52:08 by masantos          #+#    #+#             */
/*   Updated: 2022/02/26 21:19:44 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		index;
	char	a;

	index = 0;
	while (str[index] != '\0')
	{
		a = str[index];
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		{
			index++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "Todobientodocorrectoyyoquemealegro";

	int a = ft_str_is_alpha(str);
	printf("%d", a);
	return (0);
}
*/
