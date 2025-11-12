/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:41:39 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 16:42:18 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	dst_len = 0;
	while (src[src_len])
	{
		src_len++;
	}

	while (dst[dst_len])
	{
		dst_len++;
	}
	
	i = 0;
	if (dstsize > 0)
	{
		while ((i < dstsize - dst_len - 1) && src[i])
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dst[15] = "isa";
	const char *src = "bella";

	printf("%ld\n", ft_strlcat(dst, src, sizeof(dst)));
	printf("%s\n", dst);

//	printf("%ld\n", strlcat(dst, src, sizeof(dst)));
//	printf("%s\n", dst);
}*/
