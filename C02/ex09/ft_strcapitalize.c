/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:09:20 by masantos          #+#    #+#             */
/*   Updated: 2022/02/24 13:07:47 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
		{
			str[aux] += 32;
		}
		aux++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		index;

	index = 0;
	ft_strlowcase(str);
	while (str[index] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if (str[index + 1] >= 'a' && str[index +1] <= 'z')
		{
			if ((str[index] >= ' ') && (str[index] <= '/'))
			{
				str[index + 1] -= 32;
			}
			if ((str[index] >= ':') && (str[index] <= '@'))
			{
				str[index + 1] -= 32;
			}
		}
		index++;
	}	
	return (str);
}

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int 	aux = 0;
	ft_strcapitalize(str);
	while (str[aux] != '\0')
	{
		printf("%c", str[aux]);
		aux++;
	}
	return (0);
}
