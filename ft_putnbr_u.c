/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_u.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 11:17:20 by rbrune        #+#    #+#                 */
/*   Updated: 2022/04/08 11:17:21 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	modulo_hell(unsigned int nb, int *counter)
{
	if (nb > 0)
	{
		modulo_hell (nb / 10, counter);
		*counter += ft_putchar (nb % 10 + '0');
	}
}

int	ft_putnbr_u(unsigned int nb)
{
	int	counter;

	counter = 0;
	if (nb == 0)
		counter += ft_putchar('0');
	else
		modulo_hell(nb, &counter);
	return (counter);
}
