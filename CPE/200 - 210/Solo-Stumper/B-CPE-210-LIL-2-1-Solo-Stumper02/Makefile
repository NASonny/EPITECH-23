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

NAME	=  hidenp

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 hidenp \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f hidenp

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o hidenp	$(SRC)	$(CFLAGS)

re:	fclean all
