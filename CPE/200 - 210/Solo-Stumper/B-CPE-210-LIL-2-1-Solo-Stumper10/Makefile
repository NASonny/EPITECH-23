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

NAME	= fazzbizz

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 fazzbizz	\
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f fazzbizz

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o fazzbizz	$(SRC)	$(CFLAGS)

re:	fclean all
