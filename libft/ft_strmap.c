/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 10:19:39 by lsmienk        #+#    #+#                */
/*   Updated: 2019/04/19 10:59:46 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*fstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen((char *)s);
	fstr = ft_strnew(j);
	if (fstr == NULL)
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			fstr[i] = f(s[i]);
			i++;
		}
		return (fstr);
	}
	return (NULL);
}
