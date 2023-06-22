##
## EPITECH PROJECT, 2022
## Makefile minishell1
## File description:
## PSU minishell1
##


SRC =	main.c	\
		my_putstr.c	\



OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CFLAGS = -Iinclude
CPFLAGS += -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
			mysh \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f 	mysh

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o mysh	$(SRC)	$(CFLAGS)

re:	fclean all
