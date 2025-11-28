/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:38:08 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 19:24:11 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("ft: %i\n", ft_strncmp("isabella", "isadora", 3));
	printf("og: %i\n", strncmp("isabella", "isadora", 3));

	printf("ft: %i\n", ft_strncmp("isabella", "isadora", 4));
	printf("og: %i\n", strncmp("isabella", "isadora", 4));

	printf("ft: %i\n", ft_strncmp("isadora", "isabella", 3));
	printf("og: %i\n", strncmp("isadora", "isabella", 3));

	printf("ft: %i\n", ft_strncmp("isadora", "isabella", 4));
	printf("og: %i\n", strncmp("isadora", "isabella", 4));
}
*/
