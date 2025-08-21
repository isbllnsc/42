/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:36:00 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/14 19:57:56 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	unsigned int nb = 5;
	printf("%s", ft_strncat(argv[1], argv[2], nb));
	printf("%s", strncat(argv[1], argv[2], nb));
	(void)argc;
}
*/
// purpose is to concatenate (append) a specified number of characters 
// from a source string to the end of a destination string
