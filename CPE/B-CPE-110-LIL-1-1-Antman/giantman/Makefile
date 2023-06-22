##
## EPITECH PROJECT, 2022
## my_ls
## File description:
## Makefile of my_ls
##

SRC =	$(wildcard *.c)


OBJ	=	$(SRC:.c=.o)

NAME	= giantman

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 giantman \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f giantman

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o giantman	$(SRC)	$(CFLAGS)

re:	fclean all
