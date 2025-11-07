/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:35:56 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 16:36:24 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	while (i < n && str1[i] == str2[i])
		i++;

	if (i < n && (str1[i] != str2[i]))
		return (str1[i] - str2[i]);

	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d\n", ft_memcmp("isabella", "isadora", 3));
	printf("%d\n", memcmp("isabella", "isadora", 3));

	printf("%d\n", ft_memcmp("isabella", "isadora", 4));
	printf("%d\n", memcmp("isabella", "isadora", 4));
}*/
