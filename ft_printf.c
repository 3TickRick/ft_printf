#include "ft_printf.h"

static int	print_function(size_t i, const char *arg, va_list ap)
{
	if (arg[i] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (arg[i] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (arg[i] == 'd' || arg[i] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (arg[i] == '%')
		return (ft_putchar('%'));
	if (arg[i] == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	if (arg[i] == 'p')
		return (ft_pointer_hexi(va_arg(ap, long), 16));
	if (arg[i] == 'X')
		return (ft_hexi_base(va_arg(ap, unsigned int), 16));
	if (arg[i] == 'x')
		return (ft_lhexi_base(va_arg(ap, unsigned int), 16));
	return (0);
}

int	ft_printf(const char *arg, ...)
{
	va_list	ap;
	size_t	i;
	int		sum;

	sum = 0;
	i = 0;
	va_start(ap, arg);
	while (arg[i])
	{
		if (arg[i] == '%')
		{
			i++;
			sum += print_function(i, arg, ap);
		}
		else
			sum += ft_putchar(arg[i]);
		i++;
	}
	return (sum);
}
