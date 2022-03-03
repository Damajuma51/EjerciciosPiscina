/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:31:56 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 18:40:00 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	aux;
	int	aux2;

	aux = 0;
	aux2 = 0;
	if (to_find[aux] == '\0')
	{
		return (str);
	}
	while (str[aux] != '\0')
	{
		aux2 = 0;
		while (str[aux + aux2] == to_find[aux2] && str[aux + aux2] != '\0')
		{
			aux2++;
		}
		if (to_find[aux2] == '\0')
		{
			return (&str[aux]);
		}
		aux++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "1: one";
	char	to_find[] = ":";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
