/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:48:46 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/06 15:08:06 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	if (b != 0)
	{
		x = *a;
		*a = *a / *b;
		*b = x % *b;
	}
}
/*
int main(void)
{
	int a = 15;
	int b = 2;
	printf("a = %d, b = %d.\n", a, b);

	ft_ultimate_div_mod(&a, &b);
        printf("Division result: %d, remainder: %d\n", a, b);	
}*/
