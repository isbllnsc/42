/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:46:52 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/06 11:42:33 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main(void)
{
	int div, mod, numberA, numberB;

	numberA = 15;
	numberB = 2;

	ft_div_mod(numberA, numberB, &div, &mod);
	printf("%d/%d = %d, remainder: %d\n", numberA, numberB, div, mod);
}*/
