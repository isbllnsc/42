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

#include "stdlib.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp[n];
	while (i < n)
	{
		temp[i] = ((const char *)src)[i];
		((char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	*src = "isabella";
	char	*dest[10];

	printf("%s", (char *)ft_memmove(dest, src, 3));
}*/
