##
## EPITECH PROJECT, 2022
## Makefile minishell1
## File description:
## PSU minishell1
##

CC=gcc
CFLAGS=	-Wall -Wextra -Iinclude

all: solver generator

solver:
    cd solver && make

generator:
    cd generator && make

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
    cd solver && make clean
    cd generator && make clean

fclean:
	cd solver && make fclean
	cd generator && make fclean
re:
	cd solver && make fclean all
	cd generator && make fclean all
