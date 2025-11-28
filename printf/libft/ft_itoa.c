/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 19:47:48 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	size_n;
	char	*ns;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size_n = count(n);
	ns = malloc(sizeof(char) * (size_n + 1));
	if (ns == NULL)
		return (NULL);
	ns[size_n--] = '\0';
	if (n < 0)
	{
		ns[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		ns[size_n--] = n % 10 + '0';
		n /= 10;
	}
	return (ns);
}
/*#include <stdio.h>
int	main()
{
	printf("%s", ft_itoa(-10));
	printf("%s", ft_itoa(-0));
	printf("%s", ft_itoa(10));
}*/
