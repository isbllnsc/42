/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:07:46 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/14 16:58:59 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*#include <stdio.h>

int	main()
{
	char	str[10] = "isabella";

	ft_bzero(str, 3);
	printf("%s", str); // n printa nada pq o primeiro caractere vira \0 (string termina)
	printf("%s", str + 3);
}*/
