/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/26 10:40:57 by lsmienk        #+#    #+#                */
/*   Updated: 2019/04/19 10:59:46 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = (int)ft_strlen(s);
	while ((len - 1) > i)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = temp;
		i++;
		len--;
	}
	return (s);
}
