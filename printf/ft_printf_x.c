/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:16:58 by isabde-s          #+#    #+#             */
/*   Updated: 2025/12/05 16:33:41 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned int n, char t)
{
	char	*hex;
	size_t	count;

	hex = "0123456789abcdef";
	if (t == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_printf_x(n / 16, t);
	return (count += ft_printf_chr(n % 16, t));
}
