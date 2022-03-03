/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:06:08 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 18:36:48 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_dest;
	unsigned int	index_src;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}
	while (index_src < nb && src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	unsigned int i = 5;

	char	palabra1[] = "Hola ";
	char	palabra2[] = "Mundo";

	printf("%s", ft_strncat(palabra1, palabra2, i));
}
*/
