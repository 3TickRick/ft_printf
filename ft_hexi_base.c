#include "ft_printf.h"

static void	ft_hex_print(unsigned int n, unsigned int base, int *counter)
{
	const char	*HEX = "0123456789ABCDEF";

	if (n < base)
		*counter += ft_putchar(HEX[n % base]);
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
