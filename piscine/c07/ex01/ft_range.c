/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:40:43 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/21 11:56:46 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*vet;
	int	i;

	vet = (int *)malloc(sizeof(int) * (max - min));
	if (!vet)
		return (NULL);
	i = 0;
	while (min < max)
	{
		vet[i] = min;
		min++;
		i++;
	}
	return (vet);
}
/*
#include <stdio.h>

int main(void)
{
	int i = 0;
	int *arr = ft_range(5, 10);
	int min = 5;
	int max = 10;

	while (i < max - min)
	{
		printf("%d", arr[i]);
		i++;
	}
}*/
