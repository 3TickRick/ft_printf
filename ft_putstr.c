/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/08 11:17:21 by rbrune        #+#    #+#                 */
/*   Updated: 2022/04/08 11:17:22 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
	return (index);
}
