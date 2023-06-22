##
## EPITECH PROJECT, 2022
## my_sokoban
## File description:
## Makefile of sokoban
##

SRC = 	sokoban.c \
		my_strlen.c	\
		my_putchar.c	\
		my_putstr.c	\
		open_readsokoban.c	\


OBJ	=	$(SRC:.c=.o)

NAME	= my_sokoban

CFLAGS = -Wall -Wextra	-lncurses -Iinclude

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 my_sokoban \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f my_sokoban

fclean:	clean
	rm -f *.o

$(NAME):
	gcc	-o my_sokoban	$(SRC)	$(CFLAGS)

re:	fclean all
