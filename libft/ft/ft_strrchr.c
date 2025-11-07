/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:39:00 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 16:39:55 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}

	if ((unsigned char)c == '\0')
		return ((char *)s + i);

	while (i >= 0 && s[i - 1])
	{
		if ((unsigned char)s[i - 1] == (unsigned char)c)
		{
			return ((char *)s + (i - 1));
		}
		i--;
	}

	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_strrchr("aabbcc", 'b'));
	printf("%s\n", ft_strrchr("aabbcc", '\0'));
}
*/
// strrchr = string reverse character
