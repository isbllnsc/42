/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:29:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 16:33:40 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count > 0 && size > 0 && (SIZE_MAX / count < size))
		return (NULL);

	total = count * size;

	ptr = malloc(total);

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
