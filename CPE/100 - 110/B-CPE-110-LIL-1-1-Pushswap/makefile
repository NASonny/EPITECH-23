##
## EPITECH PROJECT, 2022
## Makefile pushswap
## File description:
## CPE PUSHSWAP
##


SRC =	main.c	\
		pushswap_func.c	\
		my_getnbr.c	\
		my_putstr.c	\
		struct.c	\
		pushswap.c	\



OBJ	=	$(SRC:.c=.o)

NAME	= push_swap

CFLAGS = -Iinclude
CPFLAGS += -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 push_swap \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f push_swap

fclean:	clean
	rm -f *.o

$(NAME):
	gcc -o push_swap	$(SRC)	$(CFLAGS)

re:	fclean all
