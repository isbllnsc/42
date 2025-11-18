/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:42:36 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 16:42:59 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}

	if (dstsize > 0)
	{
		while ((i < dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';

	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main ()
{
	char	dst[10] = "isa";
	const char	*src = "bella";

	printf("%ld\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%s\n", dst);

	printf("%ld\n", strlcpy(dst, src, sizeof(dst)));
	printf("%s\n", dst);
}*/
