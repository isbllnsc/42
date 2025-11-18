/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:41:39 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 18:33:45 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		src_len;
	size_t		dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[30]; memset(dest, 0, 30);
        char * src = (char *)"AAAAAAAAAAAAAAA";

	printf("%zu\n", ft_strlcat(dest, src, 0));

	chat dst[15] = "isa";
	const char *src = "bella";

	printf("%ld\n", ft_strlcat(dst, src, sizeof(dst)));
	printf("%s\n", dst);

	printf("%ld\n", strlcat(dst, src, sizeof(dst)));
	printf("%s\n", dst);
*/
