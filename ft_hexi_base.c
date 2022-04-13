/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hexi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 11:17:12 by rbrune        #+#    #+#                 */
/*   Updated: 2022/04/08 11:20:54 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hex_print(unsigned int n, unsigned int base, int *counter)
{
	const char	*hex = "0123456789ABCDEF";

	if (n < base)
		*counter += ft_putchar(hex[n % base]);
	else
	{
		ft_hex_print(n / base, base, counter);
		ft_hex_print(n % base, base, counter);
	}
}

int	ft_hexi_base(unsigned int n, unsigned int base)
{
	int	counter;

	counter = 0;
	ft_hex_print(n, base, &counter);
	return (counter);
}
