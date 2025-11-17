/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:37:24 by isabde-s          #+#    #+#             */
/*   Updated: 2025/10/17 17:37:35 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	return (ft_isalpha(n) || ft_isdigit(n));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_isalnum(10));
}*/
