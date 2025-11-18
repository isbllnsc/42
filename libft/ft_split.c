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

static	size_t	countwords(char	const	*s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
			len++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (len);
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
	size_t	ws;
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
		ws = 0;
		while (s[ws] && s[ws] != c)
			ws++;
		final[i] = ft_substr(s, 0, ws);
		if (final[i] == NULL)
			return (free_split(final), NULL);
		s += ws;
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
