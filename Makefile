# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rbrune <rbrune@student.42.fr>                +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/08 11:17:22 by rbrune        #+#    #+#                  #
#    Updated: 2022/04/08 11:17:23 by rbrune        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc 
CFLAGS  = -Werror -Wall -Wextra
NAME = libftprintf.a

src = ft_putnbr_u.c ft_putstr.c ft_putchar.c ft_putnbr.c ft_printf.c ft_hexi_base.c ft_lhexi_base.c ft_pointer_hexi.c
obj = ft_putnbr_u.o ft_putstr.o ft_putchar.o ft_putnbr.o ft_printf.o ft_hexi_base.o ft_lhexi_base.o ft_pointer_hexi.o


all : $(NAME)

$(NAME) : $(obj)
	@ar -rsc $(NAME) $(obj) 

clean:
	rm -f $(obj)

fclean:
	rm -f $(NAME) $(obj)

re: fclean all

.PHONY: clean fclean all re