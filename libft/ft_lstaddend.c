/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstaddend.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/06 12:08:56 by lsmienk        #+#    #+#                */
/*   Updated: 2019/05/16 13:14:25 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*current;

	if (*alst != NULL)
	{
		current = *alst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	else
		*alst = new;
}
