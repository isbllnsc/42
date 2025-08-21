/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:10:04 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/21 14:20:42 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	*range = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	size = max - min;
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min ++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*vet = NULL;
	int	i = 0;
	int	min = 10;
	int	max = 23;

	printf("%d\n\n", ft_ultimate_range(&vet, min, max));

	while (i < (max - min))
	{
		printf("%d ", vet[i]);
		i++;
	}
}*/
