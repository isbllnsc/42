/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:47:21 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 19:15:44 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}

	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	beg;
	int	end;
	int	i;
	char	*cpys1;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (s1[beg] && check(s1[beg], set))
		beg++;
	end = ft_strlen(s1);
	while (end > beg && check(s1[end - 1], set))
		end--;
	cpys1 = malloc(end - beg + 1);
	if (!cpys1)
		return (NULL);
	i = 0;
	while (beg < end)
	{
		cpys1[i] = s1[beg];
		i++;
		beg++;
	}
	cpys1[i] = '\0';
	return (cpys1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_strtrim("***oi***", "*"));
	printf("%s\n", ft_strtrim("***oi", "*"));
	printf("%s\n", ft_strtrim("oi***", "*"));
	printf("%s\n", ft_strtrim("&-$#oi!*%()@*^*", "()&-$@^!#%*"));
	printf("%s\n", ft_strtrim("", "*"));
	printf("%s\n", ft_strtrim("***oi***", ""));
	printf("%s\n", ft_strtrim("***o!i***", "()&-$@^!#%*"));
}*/
