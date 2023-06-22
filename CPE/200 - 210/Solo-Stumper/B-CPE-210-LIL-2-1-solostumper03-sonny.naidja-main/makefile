##
## EPITECH PROJECT, 2022
## Makefile pushswap
## File description:
## Solo Stumper
##


SRC =	main.c	\



OBJ	=	$(SRC:.c=.o)

NAME	= fozzbazz

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 fozzbazz \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f fozzbazz

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o fozzbazz	$(SRC)	$(CFLAGS)

re:	fclean all
