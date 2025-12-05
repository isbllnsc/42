/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:13:15 by isabde-s          #+#    #+#             */
/*   Updated: 2025/12/05 18:33:07 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n)
{
	size_t	count;

	count = 0;
	if (n >= 10)
		count += ft_printf_u(n / 10);
	return (count += ft_printf_chr(n % 10 + '0'));
}
