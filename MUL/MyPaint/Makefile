##
## EPITECH PROJECT, 2022
## Makefile mypaint
## File description:
## mypaint
##


SRC =	main.c	\
		create_window.c	\
		destroy_app.c	\
		draw_game.c	\
		run_app.c	\
		my_putstr.c	\
		my_putchar.c	\
		string.c	\


OBJ	=	$(SRC:.c=.o)

NAME	= mypaint

CFLAGS = -lcsfml-window -lcsfml-graphics -lcsfml-system -Iinclude -lcsfml-audio
CPFLAGS += -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 mypaint \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f mypaint

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o mypaint	$(SRC)	$(CFLAGS)

re:	fclean all
