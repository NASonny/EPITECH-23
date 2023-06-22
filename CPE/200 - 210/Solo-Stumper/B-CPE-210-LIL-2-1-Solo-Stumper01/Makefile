##
## EPITECH PROJECT, 2022
## Makefile stumper
## File description:
## Solo Stumper
##


SRC =	main.c	\
		my_putstr.c	\
		my_putchar.c	\


OBJ	=	$(SRC:.c=.o)

NAME	=  countwords

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 countwords \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f countwords

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o countwords	$(SRC)	$(CFLAGS)

re:	fclean all
