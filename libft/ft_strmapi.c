/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/14 21:14:39 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int	i;

	s2 = malloc((ft_strlen((char *)s) + 1));

	if (!s2)
		return (NULL);

	i = 0;
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}

	s2[i] = '\0';
	return (s2);
}
/*
#include <stdio.h>
char	ft_aux(unsigned int i, char c)
{
	return (c - 32);
	(void)i;
}

int	main()
{
	printf("%s", ft_strmapi("isabella", ft_aux));
}*/
