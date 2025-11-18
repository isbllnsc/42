/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:31:42 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 16:31:56 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *substring, size_t len)
{
	size_t	i;
	size_t	j;

	if (*substring == '\0')
		return ((char *)string);
	i = 0;
	while (i < len && string[i])
	{
		j = 0;
		while ((i + j < len) && (string[i + j] == substring[j]))
		{
			if (substring[j + 1] == '\0')
				return ((char *)string + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%s\n", ft_strnstr("miley ray cyrus", "ray", 9));
	printf("%s\n", strnstr("miley ray cyrus", "ray", 9));

	printf("%s\n", ft_strnstr("miley ray cyrus", "ray", 8));
        printf("%s\n", strnstr("miley ray cyrus", "ray", 8));

	printf("%s\n", ft_strnstr("miley ray cyrus", "", 9));
	printf("%s\n", strnstr("miley ray cyrus", "", 9));
}*/
