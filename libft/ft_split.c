/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/07 21:07:55 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int	i;
	int	countw;
	int	start;
	int	lenw;
	char    **list;

	i = 0;
	countw = 0;
	lenw = 0;
	while (s[i])
	{
		while (s[i] && (s[i] <= 32 || s[i] == c))
			i++;
		
		countw++;

		start = i;
		while (s[i] && (s[i] != c && s[i] > 32))
		{
			i++;
		}
		lenw = i - start;
		list = malloc(sizeof(char *) * (countw + 1)); //pointers array
		list[i] = malloc(sizeof(char) * (lenw + 1));
	}

	list[countw] = NULL;

	return (list);
}

int	main()
{
	ft_split("um dois tres", ' ');
}
