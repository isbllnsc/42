/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:44:57 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 16:45:23 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str2;
	size_t	i;
	size_t	j;

	str2 = malloc(len + 1);
	i = 0;
	while (((char *)s)[i])
	{
		if (i == start)
		{
			j = 0;
			while (j < len && ((char *)s)[i + j])
			{
				str2[j] = ((char *)s)[i + j];
				j++;
			}
		}
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s", ft_substr("um dois tres", 3, 4));
}*/
