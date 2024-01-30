##
## EPITECH PROJECT, 2022
## Makefile my_hunter
## File description:
## my_hunter
##


SRC =	main.c	\
		create_window.c	\
		destroy_app.c	\
		draw_game.c	\
		run_app.c	\
		my_putstr.c	\
		my_putchar.c	\


OBJ	=	$(SRC:.c=.o)

NAME	= my_hunter

CFLAGS =  I/usr/include -L/usr/lib64 -lcsfml-window -lcsfml-graphics -lcsfml-system -Iinclude -lcsfml-audio
CPFLAGS += -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 my_hunter \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f my_hunter

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o my_hunter	$(SRC)	$(CFLAGS)

re:	fclean all
