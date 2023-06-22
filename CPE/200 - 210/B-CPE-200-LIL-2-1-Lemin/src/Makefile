##
## EPITECH PROJECT, 2022
## B-CPE-200-LIL-2-1-lemin-mathis.zucchero
## File description:
## Makefile
##

SRC =	lemin.c \
		parse/parser.c \
		parse/def_start.c \
		parse/def_end.c \
		parse/set_chamber.c \
		parse/create_ant.c \
		print_debug.c \

OBJ = 	$(SRC:.c = .o)

NAME =	lem_in

FLAGS = -Wall -Wextra -I../include -g -L../lib -lmy

all : 	$(NAME)
		@mv $(NAME) ../

$(NAME):	$(SRC)
		gcc $(SRC) -o $(NAME) $(FLAGS)

clean:
	$(RM) *.o

fclean: clean

re: fclean all
