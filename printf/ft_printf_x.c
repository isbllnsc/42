/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:16:58 by isabde-s          #+#    #+#             */
/*   Updated: 2025/12/05 20:10:58 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x_lower(unsigned int n)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_printf_x_lower(n / 16);
	return (count += ft_printf_chr(n % 16));
}

int	ft_printf_x_upper(unsigned int n)
{
	char	*hex;
	int		count;

	hex = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_printf_x_upper(n / 16);
	return (count += ft_printf_chr(n % 16));
}
