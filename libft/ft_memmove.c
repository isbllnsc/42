/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:43:26 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 15:57:36 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*ns;
	char		*nd;

	ns = (char *)src;
	nd = (char *)dest;
	if (dest > src)
		while (n--)
			nd[n] = ns[n];
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
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
