/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validate.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/29 09:55:29 by lsmienk        #+#    #+#                */
/*   Updated: 2019/05/24 12:55:31 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "fillit.h"

/*
** This function checks if there are at least 2 tetrimino's that are connected.
*/

static int		connexxion(t_tet *tet)
{
	t_point i;

	i.z = 0;
	i.x = 0;
	while (i.x < 4)
	{
		i.y = 1;
		while (i.y <= 3)
		{
			if ((tet->point[i.x + i.y].x - tet->point[i.x].x) == 1 && (
			(tet->point[i.x + i.y].y - tet->point[i.x].y) == 1 ||
			(tet->point[i.x + i.y].y - tet->point[i.x].y) == -1 ||
			tet->point[i.x + i.y].y - tet->point[i.x].y) == 0)
				i.z++;
			if ((tet->point[i.x + i.y].x - tet->point[i.x].x) == 0 &&
			(tet->point[i.x + i.y].y - tet->point[i.x].y) == 1)
				i.z++;
			i.y++;
		}
		i.x++;
	}
	if (i.z == 3 || i.z == 4)
		return (1);
	return (-1);
}

static void		fix_it_felix(t_point *start, int x, int y, t_point *point)
{
	if (start->z == 0)
	{
		start->z = 1;
		start->x = x;
		start->y = y;
	}
	point->x = x - start->x;
	point->y = y - start->y;
}

/*
** Is all the innput correct? It checks for the right amount of # and '.'.
** Maybe I will add a line to see if the '\n' are in the right places.
*/

static int		correct(char *input)
{
	int	i;
	int	h;
	int	p;

	h = 0;
	p = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '.')
			p++;
		if (input[i] == '#')
			h++;
		i++;
	}
	if (h != 4 || p != 12)
		return (-1);
	if (input[4] != '\n' && input[9] != '\n' && input[14] != '\n' &&
	input[19] != '\n' && input[20] != '\n')
		return (-1);
	return (1);
}

/*
** Place_tet searches for the #, every # it finds and gives the coardanites
** to the Fix_it_felix function. We look from top to bottom.
*/

static int		create_tet(char *input, t_tet *tet)
{
	int		count;
	int		x;
	int		y;
	t_point	start;

	start.z = 0;
	count = 0;
	y = 0;
	while (y < 20)
	{
		x = 0;
		while (x < 5)
		{
			if (input[x + y] == '#' && count <= 3)
			{
				fix_it_felix(&start, x, y / 5, &(tet->point[count]));
				count++;
			}
			x++;
		}
		y += 5;
	}
	return (1);
}

/*
** This function goes into all the other validate functions.
** If a function returns a -1 the input is not valid
*/

int				validate(char *input, t_list *lst, int count)
{
	int		res;
	t_tet	*tet;
	t_list	*add;

	add = (t_list*)malloc(sizeof(t_list));
	tet = (t_tet*)malloc(sizeof(t_tet));
	tet->letter = count + 'A';
	tet->status = 0;
	res = correct(input);
	if (res == -1)
		return (-1);
	res = create_tet(input, tet);
	res = connexxion(tet);
	add->content_size = sizeof(tet);
	add->content = tet;
	add->next = NULL;
	ft_lstaddend(&lst, add);
	return (res);
}
