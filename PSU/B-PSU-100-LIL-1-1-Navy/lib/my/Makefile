##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	my_compute_power_rec.c	\
		my_if.c \
		my_intlen.c \
		my_opti.c \
		my_print_base.c \
		my_print_float.c \
		my_print_g.c \
		my_print_gbis.c \
		my_print_p.c \
		my_print_str.c \
		my_print_unsigned_arg.c \
		my_printf.c \
		my_put_nbr.c \
		my_putchar.c \
		my_putstr.c \
		my_revstr.c \
		my_strcat.c \
		my_strlen.c \
		my_strncpy.c \
		my_strcmp.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/
	rm $(NAME)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:    clean
	rm -f ../libmy.a

re:    fclean    all
