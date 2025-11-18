/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 19:43:36 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
	s[i] = '\0';
}
/*
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
}*/
