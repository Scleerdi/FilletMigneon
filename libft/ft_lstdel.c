/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 10:53:49 by lsmienk        #+#    #+#                */
/*   Updated: 2019/04/19 10:59:46 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list *new;
	t_list *lnext;

	new = *alst;
	if (del == NULL)
		return ;
	while (new)
	{
		lnext = new->next;
		del(new->content, sizeof(new));
		free(new);
		new = lnext;
	}
	*alst = NULL;
}
