##
## EPITECH PROJECT, 2022
## my_ls
## File description:
## Makefile of my_ls
##

SRC = 	my_ls.c \
			my_putchar.c	\
			my_putstr.c	\
			flags_myls.c	\
			secondflags_myls.c	\
			ls_arg.c	\
			ls_noarg.c	\


OBJ	=	$(SRC:.c=.o)

NAME	= my_ls

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 my_ls \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f my_ls

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o my_ls	$(SRC)	$(CFLAGS)

re:	fclean all
