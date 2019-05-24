/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 11:30:28 by lsmienk        #+#    #+#                */
/*   Updated: 2019/04/19 10:59:46 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = ft_strnew(len);
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	return (sub);
}
