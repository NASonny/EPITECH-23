##
## EPITECH PROJECT, 2022
## my_ls
## File description:
## Makefile of my_ls
##

SRC =	$(wildcard *.c)


OBJ	=	$(SRC:.c=.o)

NAME	= antman

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 antman \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f antman

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o antman	$(SRC)	$(CFLAGS)

re:	fclean all
