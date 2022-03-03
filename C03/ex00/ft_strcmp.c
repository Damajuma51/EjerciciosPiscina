/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:49:05 by masantos          #+#    #+#             */
/*   Updated: 2022/02/28 19:21:44 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 < *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if ((*s1 == '\0') || (*s2 == '\0'))
	{
		return (*s1 - *s2);
	}
	else
	{
		return (1);
	}
}

int	main(void)
{
	char	s1[] = "cbc";
	char	s2[] = "acc";

	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
