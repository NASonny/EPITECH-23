##
## EPITECH PROJECT, 2022
## B-CPE-101-LIL-1-1-myprintf-mathis.zucchero
## File description:
## Makefile of my_printf
##

SRC = 	my_strlen.c \
		my_count_int.c \
		my_put_nbr.c \
		my_putchar.c \
		my_putstr.c \
		my_count_int.c \
		my_printf.c \
		my_compute_power_it.c \
		my_conv_funct.c \
		my_precision_funct.c \
		my_conv_funct_2.c \
		my_switch.c \

OBJ	=	$(SRC:.c=.o)

NAME	= libmy.a

CC = gcc
CFLAGS = -Wall -Wextra -I../../include
CLIB = -L./lib/my -lmy

CP	=  cp $(NAME) ../

CPH	= cp my.h ../../include/

execute:	$(CC) src/main.c	$(CFLAGS)	$(CLIB)

all:	$(NAME)

gitignore:
	touch .gitignore
	echo a.out \
		 libmy.a \
		 .gitignore \
		 "*~" 		\
		 "*#"			\
		 "*.o"		\
		 > .gitignore
	mv -f .gitignore ../../

clean:
	rm -f libmy.a

fclean:	clean
	rm -f *.o

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

re:	fclean all
