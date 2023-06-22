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
		my_str_to_word_array.c	\
		my_strncat.c	\


OBJ	=	$(SRC:.c=.o)

NAME	= kebabcase_formatter

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 kebabcase_formatter \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f kebabcase_formatter

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o kebabcase_formatter	$(SRC)	$(CFLAGS)

re:	fclean all
