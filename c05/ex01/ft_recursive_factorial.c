/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:37:05 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/18 16:05:01 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb *= ft_recursive_factorial(nb - 1));
}
/*
int	main(int argc, char **argv)
{
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	(void)argc;
}*/
