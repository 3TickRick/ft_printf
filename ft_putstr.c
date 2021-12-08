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
