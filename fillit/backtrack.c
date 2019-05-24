/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   backtrack.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/20 13:24:48 by scleerdi       #+#    #+#                */
/*   Updated: 2019/05/20 16:37:11 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** this function is supposed to make the order in which the tetraminos are read
** irrelevant to their placement by checking and replacing
** if replacing the last tetramino doesnt solve the placement
** it looks back futher
*/

void	backtrack(char **map, t_tet *tet, int size)
{
	int x;
	int y;

	tet->status = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (map[y][x] == tet->letter)
				map[y][x] = '.';
			x++;
		}
		y++;
	}
}
