/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrcamp <pedrcamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:41:05 by pedrcamp          #+#    #+#             */
/*   Updated: 2025/08/03 23:20:46 by eride-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	first_line(int x)
{
	char	l;
	int		count_x;

	count_x = 1;
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
		{
			l = 'A';
		}
		else
		{
			l = 'B';
		}
		write (1, &l, 1);
		count_x++;
	}
}

void	mid_line(int x)
{
	char	l;
	int		count_x;

	count_x = 1;
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
		{
			l = 'B';
		}
		else
		{
			l = ' ';
		}
		write (1, &l, 1);
		count_x++;
	}
}

void	last_line(int x)
{
	char	l;
	int		count_x;

	count_x = 1;
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
		{
			l = 'C';
		}
		else
		{
			l = 'B';
		}
		write (1, &l, 1);
		count_x++;
	}
}

void	rush(int x, int y)
{
	int	count_y;

	count_y = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (count_y <= y)
	{
		if (count_y == 1)
		{
			first_line(x);
		}
		else if (count_y == y)
		{
			last_line(x);
		}
		else
		{
			mid_line(x);
		}
		write (1, "\n", 1);
		count_y++;
	}
}
