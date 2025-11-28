/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabde-s <isabde-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:28 by isabde-s          #+#    #+#             */
/*   Updated: 2025/11/18 19:49:13 by isabde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	countwords(const char	*s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
			count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static	void	free_split(char **final)
{
	size_t	i;

	i = -1;
	while (final[++i])
		free(final[i]);
	free(final);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	w;
	size_t	wlen;
	char	**final;

	if (s == NULL)
		return (NULL);
	w = countwords(s, c);
	final = malloc(sizeof(char *) * (w + 1));
	if (final == NULL)
		return (NULL);
	i = -1;
	while (++i < w)
	{	
		while (*s == c)
			s++;
		wlen = 0;
		while (s[wlen] && s[wlen] != c)
			wlen++;
		final[i] = ft_substr(s, 0, wlen);
		if (final[i] == NULL)
			return (free_split(final), NULL);
		s += wlen;
	}
	return (final[i] = NULL, final);
}
/*
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
}*/
