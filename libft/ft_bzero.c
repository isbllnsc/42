/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:07:46 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 15:47:50 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>
int	main()
{
	char	str[10] = "isabella";

	ft_bzero(str, 3);
	printf("%s\n", str);
	printf("%s\n", str + 3);
}*/
