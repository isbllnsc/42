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
	char	*str;
	char	*str2;
	size_t	i;
	size_t	j;

	str = (char *)s;

	str2 = malloc(len + 1);

	i = 0;
	while (str[i])
	{
		if (i == start)
		{
			j = 0;
			while (j < len && str[i + j])
			{
				str2[j] = str[i + j];
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
