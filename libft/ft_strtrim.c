/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 15:08:00 by lsmienk        #+#    #+#                */
/*   Updated: 2019/04/19 10:59:46 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		len;
	int		j;

	j = 0;
	i = 0;
	len = ft_strlen((char *)s) - 1;
	while (len >= 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (len < 0)
		i = 0;
	str = ft_strnew(len + 1 - i);
	if (str == NULL)
		return (NULL);
	while (i <= len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
