/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 11:17:19 by rbrune        #+#    #+#                 */
/*   Updated: 2022/04/08 11:17:20 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	modulo_hell(int nb)
{
	if (nb > 0)
	{
		modulo_hell (nb / 10);
		ft_putchar (nb % 10 + '0');
	}
	if (nb < 0)
	{
		ft_putchar('-');
		modulo_hell((nb / 10) * -1);
		ft_putchar(nb % 10 * -1 + '0');
	}
	return (ft_count(nb));
}

int	ft_putnbr(int nb)
{
	if (nb == 0)
		return (ft_putchar('0'));
	else if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	else
		return (modulo_hell(nb));
	return (0);
}
