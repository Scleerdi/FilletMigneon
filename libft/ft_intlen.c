/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/25 14:17:48 by lsmienk        #+#    #+#                */
/*   Updated: 2019/03/25 17:58:40 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_intlen(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len = 1;
		nb = nb * -1;
	}
	while (nb > 1)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
