/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:11:25 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/16 17:30:06 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;
	int	count;

	num = 1;
	count = 1;
	if (nb == 0)
		return (1);
	while (count <= nb)
	{
		num = num * count;
		count++;
	}
	return (num);
}
/*
int main (void)
{
	printf("%d", ft_iterative_factorial(3));
}*/
