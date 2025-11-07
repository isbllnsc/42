/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:45:55 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 16:46:49 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*str3;
	int	i;
	int	j;

	str1 = (char *)s1;
	str2 = (char *)s2;

	str3 = malloc(ft_strlen(str1) + ft_strlen(str2));

	i = 0;
	while (str1[i])
	{
		str3[i] = str1[i];
		i++;
	}

	j = 0;
	while (str2[j])
	{
		str3[i] = str2[j];
		j++;
		i++;
	}

	str3[i] = '\0';

	return (str3);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s", ft_strjoin("isa", "bella"));
}*/
