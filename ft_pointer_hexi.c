/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pointer_hexi.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 11:17:14 by rbrune        #+#    #+#                 */
/*   Updated: 2022/04/08 11:17:15 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_p(unsigned long n, unsigned int base, int *counter)
{
	const char	*hex = "0123456789abcdef";

	if (n < base)
		*counter += ft_putchar(hex[n % base]);
	else
	{
		ft_print_p(n / base, base, counter);
		ft_print_p(n % base, base, counter);
	}
}

int	ft_pointer_hexi(unsigned long n, unsigned int base)
{
	int	counter;

	counter = 2;
	write(1, "0x", 2);
	ft_print_p(n, base, &counter);
	return (counter);
}
