/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:21:13 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/14 12:10:12 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	unsigned int n = 2;
	printf("%d\n", ft_strncmp(argv[1], argv[2], n));
	printf("%d\n", strncmp(argv[1], argv[2], n));
	(void)argc;
}
*/
// compara a diferença de n caracteres de duas strings
