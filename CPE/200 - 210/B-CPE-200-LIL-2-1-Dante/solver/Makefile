##
## EPITECH PROJECT, 2022
## Makefile minishell1
## File description:
## PSU minishell1
##


SRC =	main.c	\
		my_str_to_word_array.c	\
		open_readdante.c	\
		solver_functions.c	\
		my_putstr.c	\


OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CFLAGS = -Iinclude
CPFLAGS += -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
			solver \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f 	solver

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o solver	$(SRC)	$(CFLAGS)

re:	fclean all
