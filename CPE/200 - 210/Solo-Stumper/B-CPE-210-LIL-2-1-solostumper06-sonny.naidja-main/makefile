##
## EPITECH PROJECT, 2022
## Makefile pushswap
## File description:
## Solo Stumper
##


SRC =	main.c	\
		my_getnbr.c	\
		my_print_alpha.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_strlen.c	\




OBJ	=	$(SRC:.c=.o)

NAME	= arg_joiner

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 arg_joiner \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f arg_joiner

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o arg_joiner	$(SRC)	$(CFLAGS)

re:	fclean all
