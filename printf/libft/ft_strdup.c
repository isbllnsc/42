/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:26:36 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 16:10:36 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char *)s1;
	str2 = malloc(ft_strlen(str1) + 1);
	if (str2 == NULL)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strdup("aaa"));
	printf("%s\n", ft_strdup("\0"));
	printf("%s\n", ft_strdup(""));
}*/
