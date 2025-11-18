/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:44:57 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 19:26:10 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*ns;

	size = ft_strlen(s);
	if ((size_t)start > size)
		return (ft_strdup(""));
	s += start;
	size -= start;
	if (size > len)
		size = len;
	ns = malloc(sizeof(char) * (size + 1));
	if (ns == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
/*
#include <stdio.h>

int	main()
{
	printf("%s", ft_substr("um dois tres", 3, 4));
}*/
