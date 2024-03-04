##
## EPITECH PROJECT, 2022
## Makefile minishell1
## File description:
## PSU minishell1
##


SRC =	main.c	\



OBJ	=	$(SRC:.c=.o)

NAME	=	generator

CFLAGS = -Iinclude
CPFLAGS += -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
			generator \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f 	generator

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o generator	$(SRC)	$(CFLAGS)

re:	fclean all
