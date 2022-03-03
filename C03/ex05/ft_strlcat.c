/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:54:27 by masantos          #+#    #+#             */
/*   Updated: 2022/02/24 19:30:47 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;
	unsigned int	result;
	unsigned int	aux;

	length_dest = 0;
	length_src = 0;
	aux = 0;
	while (dest[length_dest])
		length_dest++;
	while (src[length_src])
		length_src++;
	if (size > length_dest)
		result = length_dest + length_src;
	else
		result = length_dest + size;
	while (src[aux] && (length_dest + 1) < size)
	{
		dest[length_dest] = src[aux];
		length_dest++;
		aux++;
	}
	dest[length_dest] = '\0';
	return (result);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "Hola ";
	char	src[] = "Mundo ";
	unsigned int	size;
	unsigned int	result;

	size = 4;
	result = ft_strlcat(dest, src, size);
	printf("%d", result);
	return (0);
}
*/
