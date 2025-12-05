/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:05:14 by isabde-s          #+#    #+#             */
/*   Updated: 2025/12/05 16:26:49 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int     ft_printf_x(unsigned long n)
{ 
        char    *hex;
        size_t  count;

        hex = "0123456789abcdef";
        if (t == 'X')
                hex = "0123456789ABCDEF";
        if (n >= 16)
                count += ft_printf_x(n / 16, t);
        return (count += ft_printf_chr(n % 16, t))
}

int     ft_printf_p(void *ptr)
{
        size_t  count;

        count = 2;
        write(1, "0x", 2);
        count += ft_printf_x((unsigned long)ptr);
	return (count);
}
