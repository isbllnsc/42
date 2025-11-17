/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:43:26 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 17:06:05 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	temp[n];

	if (!dest && !src)
		return (NULL);

	i = 0;
	while (i < n)
	{
		temp[i] = ((const char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = temp[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "isabella";
	char	dest[10];

	ft_memmove(dest, src, 3);
	printf("%s", dest);
}*/
