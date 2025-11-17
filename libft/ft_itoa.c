/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/14 21:14:39 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	count;
	int	nb;

	nb = n;
	count = count_digits(nb);
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	str[count] = '\0';

	if (nb < 0)
		nb *= -1;
	if (nb == 0)
                str[0] = '0';	
	while (nb > 0)
	{
		str[count - 1] = (nb % 10) + '0';
		nb = nb / 10;
		count--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_itoa(10));
}*/
