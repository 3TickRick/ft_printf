#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_hexi_base(unsigned int n, int unsigned base);
int		ft_lhexi_base(unsigned int n, unsigned int base);
int		ft_pointer_hexi(unsigned long n, unsigned int base);
int		ft_putnbr_u(unsigned int nb);
int		ft_printf(const char *arg, ...);

#endif