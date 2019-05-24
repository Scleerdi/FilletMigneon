/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solver.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/13 11:47:30 by lsmienk        #+#    #+#                */
/*   Updated: 2019/05/24 12:51:51 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

static void			print_solution(char **str, int s)
{
	int y;
	int x;

	x = 0;
	y = 0;
	while (y < s)
	{
		while (x <= s)
		{
			ft_putchar(str[y][x]);
			x++;
		}
		x = 0;
		y++;
	}
}

static char			**ft_2dstrnew(size_t size_y, size_t size_x)
{
	char	**graph;
	char	*axis;
	size_t	x;

	x = size_x;
	graph = (char**)malloc(sizeof(char*) * size_y);
	if (!graph)
		return (NULL);
	size_y--;
	while ((long)size_y >= 0)
	{
		axis = ft_strnew(x);
		graph[size_y] = axis;
		size_y--;
	}
	return (graph);
}

static char			**ft_clean_map(char **map, int s)
{
	int		x;
	int		y;

	y = 0;
	x = 0;
	while (y < s)
	{
		while (x <= s)
		{
			if (x == s)
				map[y][x] = '\n';
			else if (x < s)
				map[y][x] = '.';
			x++;
		}
		if (y == s)
			map[y][x] = '\0';
		x = 0;
		y++;
	}
	return (map);
}

static int			place_checked(char **map, t_tet *tet)
{
	int			l;
	t_point		i;

	l = 0;
	while (l < 4)
	{
		printf("tet->letter%c\n", tet->letter);
		map[i.y + tet->point[l].y][i.x + tet->point[l].x] = tet->letter;
		printf("word\n");
		l++;
	}
	tet->status = 1;
	return (1);
}

static int			check_adjust(char **map, t_tet *tet, int size)
{
	t_point	i;
	int		l;

	l = 0;
	i.x = tet->point[0].x;
	i.y = tet->point[0].y;
	while (l < 4)
	{
		if ((i.x + tet->point[l].x) >= 0 && (i.y + tet->point[l].y) >= 0 &&
		(map[i.y + tet->point[l].y][i.x + tet->point[l].x] == '.' && !(NULL)))
			l++;
		else
		{
			l = 0;
			if (i.x < size - 1)
				i.x++;
			else if (i.x == size - 1)
			{
				i.x = 0;
				i.y++;
			}
		}
		if (i.y > size - 1)
			return (-1);
	}
	return (place_checked(map, tet));
}

void				solver(t_list *lst)
{
	int		size;
	char	**map;
	t_tet	*tet;
	t_list	*head;

	size = 4;
	map = ft_2dstrnew(size, size);
	if (!map)
		return ;
	map = ft_clean_map(map, size);
	head = lst;
	tet = (t_tet*)lst->content;
	while (lst != NULL)
	{
		if (tet->status != 1 && check_adjust(map, tet, size) == -1)
		{
			//backtrack(map, tet, size);
			lst = head;
			continue ;
		}
		print_solution(map, size);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
		tet = (t_tet*)lst->content;
		print_solution(map, size);
	}
}
