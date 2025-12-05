/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:34:18 by isabde-s          #+#    #+#             */
/*   Updated: 2025/12/05 18:02:05 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_type(char type, va_list args)
{
	size_t	count;

	count = 0;
	if (type == 'u')
		count += ft_printf_u(va_arg(args, unsigned int));
	else if (type == 'c')
		count += ft_printf_chr(va_arg(args, char));
	else if (type == 's')
		count += ft_printf_str(va_arg(args, char *));
	else if (type == 'x' || type == 'X')
		count += ft_printf_x(va_arg(args, int), t);
	else if (type == 'p')
		count += ft_printf_p(va_arg(args, void *));
	else if (type == 'd' || type == 'i')
		count += ft_printf_id(va_arg(args, int));
	else if (type == '%')
		write(1, "%", 1);
	else
		return (-1);
}

int     ft_printf(const char *type, ...)
{
	va_list	args;
	int	i;
	int	count;
	
	if (!type)
		return (-1);

	va_start(args, type);

	i = 0;
	count = 0;


	va_end(args);
}
