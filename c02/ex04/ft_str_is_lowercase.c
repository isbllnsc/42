/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 12:00:16 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/09 21:40:26 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z' ))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main (int argc, char *argv[])
{
	printf("%d\n", ft_str_is_lowercase(argv[1]));
	(void)argc;
}*/
