##
## EPITECH PROJECT, 2022
## B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
## File description:
## Makefile
##

SOURCE	=	./main.c 					\
			./src/minishell.c			\
			./src/my_grep_str.c			\
			./src/exec/shell.c			\
			./src/exec/shell_run.c		\
			./src/exec/shell_exec.c		\
			./src/exec/parser.c			\
			./src/exec/run_cmd_piped.c	\
			./src/env/env.c				\
			./src/exec/redirect.c		\
			./src/env/str_list.c		\
			./src/str_to_arr.c			\
			./src/check.c				\
			./src/check_2.c				\
			./src/exec/builtin.c		\
			./src/exec/cd.c				\
			./src/history/history.c		\
			./src/history/find_old_cmd.c \
			./src/history/print_history.c \
			./src/exec/operator_or_and.c \

OBJS	=	$(SOURCE:.c=.o)
OUT		=	42sh
CC		=	gcc
CFLAGS	+=	-W -Wall -I ./include
LFLAGS	=	-lmy
LDFLAGS	=	-Llib/my

all: $(OUT)

$(OUT): $(OBJS)
	@ echo -e "\033[1;34mBuilding libmy && $(OUT)...\033[0m"
	@ $(MAKE) -C lib/my/ all
	@ $(CC) $(OBJS) -o $(OUT) $(LFLAGS) $(LDFLAGS)
	@ echo -e "\033[1;32m$(OUT) successfully created!\033[0m"

clean:
	@ $(MAKE) -C lib/my/ clean
	@ $(RM) $(OBJS) *~ *# *.o *.gc* src/*.gc* src/*.o *.out
	@ echo -e "\033[1;31mAll cleaned!\033[0m"

fclean: clean
	@ $(MAKE) -C lib/my/ fclean
	@ $(RM) $(OUT)
	@ echo -e "\033[1;31m$(OUT) && libmy.a are removed!\033[0m"

re: fclean all

valgrind:
	@ $(MAKE) -C lib/my/
	@ $(CC) $(SOURCE) -o $(OUT) $(LFLAGS) $(LDFLAGS) $(CFLAGS) -g3
	@ echo -e "\033[1;34mRunning valgrind on $(OUT)...\033[0m"
	@ valgrind ./$(OUT)

gdb:
	@ $(MAKE) -C lib/my/
	@ $(CC) $(SOURCE) -o $(OUT) $(LFLAGS) $(LDFLAGS) $(CFLAGS) -g3
	@ echo -e "\033[1;34mDebugging $(OUT)...\033[0m"
	@ gdb ./$(OUT)

refresh: re
	@ ./$(OUT)
	@ echo "exit\n"
	@ ./$(OUT)
