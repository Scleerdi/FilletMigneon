/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 10:09:54 by lsmienk        #+#    #+#                */
/*   Updated: 2019/04/19 10:59:46 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len] || src[len] != '\0')
		len++;
	str = (char *)malloc(sizeof(*str) * len + 1);
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
