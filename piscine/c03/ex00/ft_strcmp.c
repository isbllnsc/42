/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:15:55 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/12 13:50:47 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int     main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_strcmp(argv[1], argv[2]));

	printf("%d\n", strcmp(argv[1], argv[2]));
}
*/
//compara o primeiro caracter de duas strings
