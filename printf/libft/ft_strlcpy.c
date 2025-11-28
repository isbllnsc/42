/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:42:36 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 19:16:32 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src || !dst)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while ((i < dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int	main ()
{
	char	dst[10] = "isa";
	const char	*src = "bella";

	printf("%zu\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%s\n", dst);

//	printf("%d\n", strlcpy(dst, src, sizeof(dst)));
//	printf("%s\n", dst);
}*/
