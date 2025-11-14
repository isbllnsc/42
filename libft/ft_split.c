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
	int	w;
	int	countw;
	int	start;
	int	lenw;
	char    **list;
	int	j;

	i = 0;
	w = 0;
	countw = 0;
	lenw = 0;
	while (s[i]) // to count words
	{
		while (s[i] && (s[i] < 33 || s[i] == c))
			i++;
		
		countw++;

		while (s[i] && (s[i] > 32 && s[i] != c))
		{
			i++;
		}
	}

	list = malloc(sizeof(char *) * (countw + 1)); // to allocate array of strs

	i = 0;
	while (s[i]) // to find the lenght of the words(strings)
	{
		while (s[i] && (s[i] < 33 || s[i] == c))
			i++;

		start = i;
		
		while (s[i] && (s[i] > 32 && s[i] != c))
			i++;

		lenw = i - start; // start = beginning of each string; i = ending

		list[w] = malloc(sizeof(char) * (lenw + 1)); // to allocate strs


		j = 0;
		while (j < lenw)
		{
			list[w][j] = s[start + j];
			j++;
		}
		list[w][j] = '\0';
		w++;
	}

		list[w] = NULL;

		return (list);
}

int	main()
{
	ft_split("um dois tres", ' ');
}
