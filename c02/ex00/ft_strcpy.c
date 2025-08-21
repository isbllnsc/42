/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:25:48 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/09 21:09:05 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main() 
{
	char src[] = "Isabella";

	int size = sizeof(src) / sizeof(src[0]);

	char dest[size];

	ft_strcpy(dest, src);

	printf("Origem: %s\n", src);
	printf("Destino: %s\n", dest);

	return (0);
}*/
