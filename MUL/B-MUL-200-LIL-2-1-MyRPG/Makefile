##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Make files for my_hunter project
##

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
BOLD_T	=	"\e[1m"
DIM_T	=	"\e[2m"
UNDLN_T	=	"\e[4m"
BLACK_C	=	"\e[30m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
LIGHT_BLUE	=	"\e[33m"
LIGHT_BLUE	=	"\e[34m"
MAGEN_C	=	"\e[35m"
CYAN_C	=	"\e[36m"
LIGHT_BLUE	=	"\e[97m"
DEFAULT_C	=	"\e[39m"
LIGHT_GREY	=	"\e[37m"
DARK_GREY	=	"\e[90m"
LIGHT_RED	=	"\e[91m"
LIGHT_GREEN	=	"\e[92m"
LIGHT_YELLO	=	"\e[93m"
LIGHT_BLUE	=	"\e[94m"
LIGHT_MAGEN	=	"\e[95m"
LIGHT_CYAN	=	"\e[96m"

SRC = 	src/main.c								\
		src/boutique/create_boutique.c			\
		src/boutique/event_boutique.c			\
		src/boutique/selling.c 					\
		src/card/create_card.c 					\
		src/card/set_text.c 					\
		src/card/increase_car.c 				\
		src/displacement/move.c					\
		src/displacement/view_displacement.c	\
		src/displacement/animation_pers.c		\
		src/echo/create_echo.c					\
		src/echo/display_echo.c					\
		src/echo/echo_anim.c					\
		src/echo/rand_pos.c						\
		src/echo/event_echo.c 					\
		src/echo/decrease_pv.c					\
		src/event/event.c						\
		src/event/event_displacement.c			\
		src/event/event_error_pressedkeys.c		\
		src/event/event_esc.c					\
		src/event/event_number.c				\
		src/event/event_number_xy.c				\
		src/forest/event_forest.c				\
		src/forest/interact_forest.c			\
		src/initialization/init.c				\
		src/initialization/init_pattern.c		\
		src/initialization/sf_pattern.c			\
		src/initialization/init_background.c	\
		src/initialization/init_character.c		\
		src/initialization/init_pnj.c			\
		src/interaction/e_interaction.c			\
		src/inventory/create_inventory.c 		\
		src/lib/my_getnbr.c						\
		src/lib/my_str_isnum.c					\
		src/lib/my_strlen.c						\
		src/lib/my_str_to_word_array.c			\
		src/lib/my_str_concat.c					\
		src/lib/int_to_str.c 					\
		src/lib/my_strcmp.c 					\
		src/lib/len_int.c 						\
		src/main_menu/create_menu.c				\
		src/main_menu/create_texts_menu.c		\
		src/main_menu/create_texts_settings.c	\
		src/main_menu/destroy_menu.c			\
		src/main_menu/destroy_settings.c		\
		src/main_menu/draw_menu.c				\
		src/main_menu/draw_settings.c			\
		src/main_menu/handle_event.c			\
		src/main_menu/menu_settings.c			\
		src/main_menu/run_menu.c				\
		src/main_menu/view_gestion.c			\
		src/main_menu/help.c 					\
		src/map/map_collide.c					\
		src/rect/set_int_rect.c					\
		src/rect/event_pnj_pers.c 				\
		src/settings/window_set.c 				\
		src/sound/set_sound.c					\
		src/text/draw_bubble.c 					\
		src/text/create_texts.c 				\
		src/window/window.c						\
		src/window/create_window.c				\
		src/window/draw.c						\
		src/window/free.c						\
		src/window/other_win.c 					\
		src/main_menu/resolution_settings.c		\
		src/main_menu/create_button_menu.c		\
		src/main_menu/button_settings.c			\
		src/main_menu/volume_button.c			\
		src/main_menu/set_drawing_settings.c	\
		src/main_menu/setting_click.c 			\


OBJ = $(SRC:.c=.o);

NAME = my_rpg

CC = gcc

LFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system
WFLAGS = -Wall -Wextra
IFLAG = -I./include
DEBUGFLAG = -g3

all: $(NAME)
	@ $(ECHO) $(BOLD_T) $(LIGHT_BLUE) " _____      _ "$(DEFAULT)"            "\
	$(LIGHT_RED)" _        " $(DEFAULT)
	@ $(ECHO) $(BOLD_T) $(LIGHT_BLUE) "|  ___|    | |"$(DEFAULT)"            "\
	$(LIGHT_RED)"(_)       " $(DEFAULT)
	@ $(ECHO) $(BOLD_T) $(LIGHT_BLUE) "| |__    __| |"$(DEFAULT)"  ___  _ __ "\
	$(LIGHT_RED)" _   __ _ " $(DEFAULT)
	@ $(ECHO) $(BOLD_T) $(LIGHT_BLUE) "|  __|  / _  |"$(DEFAULT)" / _ \|  __|"\
	$(LIGHT_RED)"| | / _  |" $(DEFAULT)
	@ $(ECHO) $(BOLD_T) $(LIGHT_BLUE) "| |___ | (_| |"$(DEFAULT)"|  __/| |   "\
	$(LIGHT_RED)"| || (_| |" $(DEFAULT)
	@ $(ECHO) $(BOLD_T) $(LIGHT_BLUE) "\____/  \__,_|"$(DEFAULT)" \___||_|   "\
	$(LIGHT_RED)"|_| \__,_|" $(DEFAULT)

$(NAME):
	@ echo
	@ $(ECHO) $(MAGEN_C) "Compiling..." $(DEFAULT)
	@ gcc $(SRC) $(LFLAGS) $(WFLAGS) $(IFLAG) -o $(NAME)
	@ echo
	@ /bin/echo -e $(BOLD_T) $(GREEN_C) "[✔] Successfully compiled: ./my_rpg"\
	$(DEFAULT)

clean :
	@ rm -f $(OBJ)
	@ tput setaf 9; /bin/echo -e $(BOLD_T) "*.o files successfully deleted";\
	tput sgr0

fclean : clean
	@ rm -f $(NAME)
	@ $(ECHO) $(BOLD_T) $(RED_C)" Executable successfully deleted" $(DEFAULT)

re : fclean all

valgrind : fclean
	@ gcc $(SRC) $(LFLAGS) $(WFLAGS) $(IFLAG) $(DEBUGFLAG) -o $(NAME)
	@ valgrind ./$(NAME)

gdb : fclean
	@ gcc $(SRC) $(LFLAGS) $(WFLAGS) $(IFLAG) $(DEBUGFLAG) -o $(NAME)
	@ gdb ./$(NAME)

.PHONY: all clean fclean re
