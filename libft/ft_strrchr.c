/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:39:00 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 19:00:20 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	n;

	i = 0;
	n = (char)c;
	while (s[i])
		i++;
	i += 1;
	while (i--)
		if (s[i] == n)
			return ((char *)s + i);
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strrchr("aabbcc", 'b'));
	printf("%s\n", ft_strrchr("aabbcc", '\0'));
}*/
