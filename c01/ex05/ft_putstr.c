/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:48:03 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/08 10:09:09 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
/*
int main(void)
{
	ft_putstr("Isabella");
}*/
/*
 OU
        while ((*str))
	write (1, str++, 1); */
