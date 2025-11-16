/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/14 21:14:39 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>

static int	countw(char const *s, char c)
{
	int	countw;
	int	i;

	countw = 0;
	i = 0;
        while (s[i])
        {
                while (s[i] && (s[i] == c))
			i++;
		if (s[i] == '\0')
			return (countw);
                countw++;

                while (s[i] && (s[i] != c))
                {
                        i++;
                }
        }
	return (countw);
}

static void	ft_lenw(char const *s, char c, int start, char **list)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	j = 0;
	w = 0;
	while (s[i])
        {
                while (s[i] && (s[i] == c))
                        i++;
                start = i;
                while (s[i] && (s[i] != c))
                        i++;
		if (s[i] == '\0')
			break ;
                list[w] = malloc(sizeof(char) * ((i - start) + 1));
                j = 0;
                while (j < (i - start))
                {
                        list[w][j] = s[start + j];
                        j++;
                }
                list[w++][j] = '\0';
        }
}

char	**ft_split(char const *s, char c)
{
	int	w;
	int	lenw;
	char    **list;
	int	start;

	if (s == NULL)
		return (NULL);

	w = countw(s, c);
	lenw = 0;
	start = 0;

	list = malloc(sizeof(char *) * (w + 1));
	list[w] = NULL;
	ft_lenw(s, c, start, list);
		return (list);
}

#include <stdio.h>

int     main()
{
        int     i = 0;
        char    **list;

        list = ft_split("um dois tres   ", ' ');
        while (list[i])
        {
                printf("%s\n", list[i]);
                i++;
	}
}
