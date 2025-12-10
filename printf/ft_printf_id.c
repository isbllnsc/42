/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:50:27 by isabde-s          #+#    #+#             */
/*   Updated: 2025/12/05 20:29:02 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_id(int n)
{
	int	count;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	count = 0;
	if (n >= 10)
		count += ft_printf_id(n / 10);
	return ((count += ft_printf_chr(n % 10 + '0')));
}
/*
int	main()
{
	ft_printf_id(-42);
        write(1, "\n", 1);

	ft_printf_id(42);
	write(1, "\n", 1);

	ft_printf_id(-2147483648);
	write(1, "\n", 1);

	ft_printf_id(0);
        write(1, "\n", 1);
}*/
