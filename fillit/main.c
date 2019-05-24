/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/29 09:54:55 by lsmienk        #+#    #+#                */
/*   Updated: 2019/05/20 13:59:39 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		fillit(fd);
		close(fd);
	}
	else
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
}
