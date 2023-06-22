##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

NAME_EXE = navy

SRC =	src/main.c \
		src/help.c	\

OBJ    =    $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -I./include/

LIB_FLAGS = -L lib/ -lmy -lncurses

all: $(NAME_EXE)

$(NAME_EXE) :	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME_EXE) $(OBJ) $(LIB_FLAGS)

clean:
	make -C lib/my/ clean
	rm -f *.o
	rm -f *~
	rm -f $(OBJ)

fclean: clean
	make -C lib/my/ fclean
	rm -f $(NAME_EXE)

clear_rm: fclean
	rm $(NAME_LIB)
	rm $(NAME_EXE)

re: fclean all

valgrind : fclean
	make -C lib/my/
	gcc -o $(NAME_EXE) $(SRC) $(ALL_FLAGS) -g
