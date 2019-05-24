/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/29 12:05:32 by lsmienk        #+#    #+#                */
/*   Updated: 2019/05/24 12:49:58 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void		fillit(int fd)
{
	t_list	**lst;
	char	tmp[21];
	int		x;
	int		count;

	count = 0;
	x = 1;
	lst = (t_list**)ft_memalloc(sizeof(t_list*));
	while (x > 0)
	{
		x = read(fd, tmp, 21);
		if ((validate(tmp, *lst, count)) == -1 || (x != 21 && x != 0))
		{
			write(1, "error\n", 6);
			return ;
		}
		count++;
	}
	solver(*lst);
}
