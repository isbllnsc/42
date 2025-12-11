/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:36:08 by isabde-s          #+#    #+#             */
/*   Updated: 2025/12/11 13:00:40 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *str, ...);
int	ft_printf_chr(int c);
int	ft_printf_str(char *s);
int	ft_printf_id(int n);
int	ft_printf_p(void *ptr);
int	ft_printf_u(unsigned int n);
int	ft_printf_x_lower(unsigned int n);
int	ft_printf_x_upper(unsigned int n);
int	ft_printf_x_lower_long(unsigned long long n);

#endif
