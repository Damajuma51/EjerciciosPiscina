/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:18:51 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 19:44:51 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

int	main(void)
{
	unsigned int	aux;
	unsigned int	n;
	char	src[] = "Hola que tal";
	char	dest[12];

	aux = 0;
	n = 3;
	ft_strncpy(dest, src, n);
	while (aux < n)
	{
		printf("%c", dest[aux]);
		aux++;
	}
	return (0);
}

