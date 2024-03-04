##
## EPITECH PROJECT, 2022
## B-CPE-200-LIL-2-1-lemin-mathis.zucchero
## File description:
## Makefile
##

SRC =	viewer.c \
		show_anthill.c \
		../src/parse/parser.c \
		../src/parse/def_start.c \
		../src/parse/def_end.c \
		../src/print_debug.c \

OBJ = 	$(SRC:.c = .o)

NAME =	lem_in_bonus

FLAGS = -Wall -Wextra -I./include -g -L../lib -lmy \
		-lcsfml-graphics -lcsfml-window -lcsfml-system

all : 	$(NAME)

$(NAME):	$(SRC)
		gcc $(SRC) -o $(NAME) $(FLAGS)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
