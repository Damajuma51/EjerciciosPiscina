/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:42:06 by masantos          #+#    #+#             */
/*   Updated: 2022/02/24 16:29:47 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((index + 1) < n && s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] > s2[index] || s1[index] < s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (s1[index] - s2[index]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned int	i = 0;
	char	palabra1[] = "MaRiO";
	char	palabra2[] = "Mario";

	while (i < 6)
	{
		printf("El valor de i es %d\n", i);
		printf("%d\n", ft_strncmp(palabra1, palabra2, i));
		printf("------------------%s", "\n");
		printf("%d\n", strncmp(palabra1, palabra2, i));
		printf("%s", "\n");
		i++;
	}
}
*/
