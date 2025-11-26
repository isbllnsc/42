/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:29:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/26 12:14:45 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb && size && (nmemb > SIZE_MAX / size))
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total);
	return (ptr);
}
/*
#include <stdio.h>

int	main()
{
	char	*ptr;
	size_t	i;

	ptr = ft_calloc(8, sizeof(char));
	i = 0;
	while (i < 8)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
}*/
