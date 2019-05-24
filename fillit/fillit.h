/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/30 13:42:16 by lsmienk        #+#    #+#                */
/*   Updated: 2019/05/24 12:55:12 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/includes/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct  s_point
{
	int         z;
	int         x;
	int         y;
}               t_point;

typedef struct  s_tet
{
	t_point     point[4];
	int			status;
	char        letter;
}               t_tet;

void	fillit(int fd);
int		validate(char *input, t_list *lst, int count);
void	solver(t_list *lst);

#endif