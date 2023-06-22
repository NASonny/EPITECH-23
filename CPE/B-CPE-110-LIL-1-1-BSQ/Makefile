##
## EPITECH PROJECT, 2022
## my_ls
## File description:
## Makefile of my_ls
##

SRC =	bsq_main.c	\
			my_putchar.c	\
			my_putstr.c	\
			open_readbsq.c	\
			functions_bsq.c	\
			bsq_map.c	\
			my_strlen.c	\
			my_str_to_word_array.c	\


OBJ	=	$(SRC:.c=.o)

NAME	= bsq

CFLAGS = -Wall -Wextra

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 bsq \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f bsq

fclean:	clean
	rm -f *.o

$(NAME): $(OBJ)
	gcc -o bsq	$(OBJ) $(CFLAGS) -g

re:	fclean all
