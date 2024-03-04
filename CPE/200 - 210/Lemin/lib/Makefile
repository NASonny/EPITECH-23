##
## EPITECH PROJECT, 2022
## B-CPE-200-LIL-2-1-lemin-mathis.zucchero
## File description:
## Makefile
##

LIB = 	my_putchar.c \
		my_str_to_word_array.c \
		my_strlen.c \
		my_strcmp.c \
		my_str_isnum.c \
		my_getnbr.c \
		my_printf.c \
		my_put_nbr.c \
		my_putstr.c \

NAME = libmy.a

OBJ = $(LIB:.c=.o)

all: $(NAME)

$(NAME): 	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
