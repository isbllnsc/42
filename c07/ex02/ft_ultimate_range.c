/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 22:57:59 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/20 11:16:26 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*vet;

	vet = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		vet[i] = min;
		min++;
		i++;
	}
	return (vet);
}

int	main(void)
{
	
}
