/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:45:34 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/06 15:07:15 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main(void)
{
	int a = 1;
	int b = 5;
	printf("Before swap: a = %d and b = %d.\n", a, b);

	ft_swap(&a, &b);
	printf("After swap: a = %d and b = %d.\n", a, b);
}*/
