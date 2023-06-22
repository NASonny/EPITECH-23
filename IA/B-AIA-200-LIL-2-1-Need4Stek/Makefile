##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Make files for my_sokoban project
##

SRC = 	src/main.c					\
		src/my_str_to_word_array.c	\
		src/send_commands.c			\
		src/get_answer.c			\
		src/my_dprintf.c			\
		src/give.c 					\
		src/give_direction.c		\
		src/test_end.c 				\

OBJ = $(SRC:.c=.o);

NAME = ai

FLAGS = -Wall -Wextra

all: $(NAME)

$(NAME):
	@ gcc $(SRC) $(FLAGS) -o $(NAME)

clean :
	@ rm -f $(OBJ)
	@ echo "Cleaned"

fclean : clean
	@ rm -f $(NAME)
	@ echo "Fcleaned"

re : fclean all
