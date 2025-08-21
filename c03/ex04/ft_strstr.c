/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:26:19 by isabde-s          #+#    #+#             */
/*   Updated: 2025/08/14 20:11:09 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	v;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (0);
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		v = i;
		while (str[v] == to_find[j])
		{
			j++;
			v++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "";
	char to_find[20] = "dois";
	printf("%s", ft_strstr(str, to_find));
//	printf("%s", strstr(str, to_find));
}*/
