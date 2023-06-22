##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## My_printf Makefile
##

SRC		=	libmy.c		\
			main.c		\
			mini_printf.c	\
			rush3_1.c	\
			rush3_2.c	\
			rush3.c

OBJ		=	$(SRC:.c=.o)

NAME		=	rush3

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -W -Wall -Wextra -o $(NAME) $(SRC) -Iinclude

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:			fclean all
