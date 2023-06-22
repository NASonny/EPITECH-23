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
		my_putchar.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_strlen.c	\




OBJ	=	$(SRC:.c=.o)

NAME	= geekNameFormatter

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 geekNameFormatter \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f geekNameFormatter

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o geekNameFormatter	$(SRC)	$(CFLAGS)

re:	fclean all
