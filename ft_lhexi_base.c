#include "ft_printf.h"

static void	ft_lhex_print(unsigned int n, unsigned int base, int *counter)
{
	const char	*hex = "0123456789abcdef";

	if (n < base)
		*counter += ft_putchar(hex[n % base]);
	else
	{
		ft_lhex_print(n / base, base, counter);
		ft_lhex_print(n % base, base, counter);
	}
}

int	ft_lhexi_base(unsigned int n, unsigned int base)
{
	int	counter;

	counter = 0;
	ft_lhex_print(n, base, &counter);
	return (counter);
}
