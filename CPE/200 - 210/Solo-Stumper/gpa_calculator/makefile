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
		my_strncat.c	\


OBJ	=	$(SRC:.c=.o)

NAME	= gpa_calculator

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 gpa_calculator	\
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f gpa_calculator

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o gpa_calculator	$(SRC)	$(CFLAGS)

re:	fclean all
