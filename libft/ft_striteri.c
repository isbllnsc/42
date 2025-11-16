/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/14 21:14:39 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>

// excluir
int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i++]);
	return i;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}

	s[i] = '\0';
}

void	f_aux(unsigned int i, char *s)
{
	*s = '*';
	(void)i;
}

#include <stdio.h>
int	main()
{
	char str[] = "isa";
	ft_striteri(str, f_aux);
	printf("%s", str);
	
}
