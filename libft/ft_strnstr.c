/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 13:13:25 by lsmienk        #+#    #+#                */
/*   Updated: 2019/04/19 10:59:46 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;

	n = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len >= n)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, n) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
