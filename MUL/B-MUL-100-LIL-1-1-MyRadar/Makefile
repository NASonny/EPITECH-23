##
## EPITECH PROJECT, 2022
## Makefile my_radar
## File description:
## my_radar
##


SRC =	main.c	\
		create_window.c	\
		destroy_app.c	\
		draw_game.c	\
		run_app.c	\
		my_putstr.c	\
		my_putchar.c	\


OBJ	=	$(SRC:.c=.o)

NAME	= my_radar

CFLAGS = -lcsfml-window -lcsfml-graphics -lcsfml-system -Iinclude -lcsfml-audio
CPFLAGS += -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 my_radar \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f my_radar

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o my_radar	$(SRC)	$(CFLAGS)

re:	fclean all
