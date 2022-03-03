/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:21:38 by masantos          #+#    #+#             */
/*   Updated: 2022/03/03 19:40:29 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	aux;

	aux = 0;
	while (src[aux] != '\0')
	{
		dest[aux] = src[aux];
		aux++;
	}
	dest[aux] = '\0';
	return (dest);
}

/*int	main(void)
{
	int		index;
	char	src[] = "Hola";
	char	dest[4];

	index = 0;
	ft_strcpy(dest, src);
	while (dest[index] != '\0')
	{
		printf("%c", dest[index]);
		index++;
	}
	return (0);
}
*/
