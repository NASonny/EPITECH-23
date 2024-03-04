##
## EPITECH PROJECT, 2022
## B-CPE-200-LIL-2-1-lemin-mathis.zucchero
## File description:
## Makefile
##

ECHO	=	/bin/echo -e
CD 		=	/bin/cd
DEFAULT	=	"\e[0m"
BOLD_T	=	"\e[1m"
DIM_T	=	"\e[2m"
UNDLN_T	=	"\e[4m"
BLACK_C	=	"\e[30m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
YELLO_C	=	"\e[33m"
BLUE_C	=	"\e[34m"
MAGEN_C	=	"\e[35m"
CYAN_C	=	"\e[36m"
WHITE_C	=	"\e[97m"
DEFAULT_C	=	"\e[39m"
LIGHT_GREY	=	"\e[37m"
DARK_GREY	=	"\e[90m"
LIGHT_RED	=	"\e[91m"
LIGHT_GREEN	=	"\e[92m"
LIGHT_YELLO	=	"\e[93m"
LIGHT_BLUE	=	"\e[94m"
LIGHT_MAGEN	=	"\e[95m"
LIGHT_CYAN	=	"\e[96m"

NAME =	lem_in

all : 	make_lib start
		@$(ECHO) "\n"$(BOLD_T)$(GREEN_C)"[✔] Make of lem-in" \
		$(LIGHT_GREEN)"\n"$(DEFAULT)


make_lib:
		@cd ./lib/ && $(MAKE) re

start:
		@cd ./src/ && $(MAKE) re

clean:
		rm -f $(OBJ)
		@cd src/ && $(MAKE) clean
		@cd lib/ && $(MAKE) clean
		@$(ECHO) "\n"$(RED_C)$(DIM_T)"[clean]  "$(DEFAULT) \
		$(BOLD_T)$(RED_C)"DELETED: "$(DEFAULT) \
		$(LIGHT_RED)"Object files"$(DEFAULT)

fclean:
		rm -f $(NAME)
		@cd ./src/  && $(MAKE) fclean
		@cd ./lib/ 	&& $(MAKE) fclean
		@$(ECHO) "\n"$(RED_C)$(DIM_T)"[clean]  "$(DEFAULT) \
		$(BOLD_T)$(RED_C)"DELETED: "$(DEFAULT) \
		$(LIGHT_RED)"Binary files"$(DEFAULT)
		@$(ECHO) "\n"$(RED_C)$(DIM_T)"[clean]  "$(DEFAULT) \
		$(BOLD_T)$(RED_C)"DELETED: "$(DEFAULT) \
		$(LIGHT_RED)"Lib files"$(DEFAULT) "\n"

re:		fclean make_lib start
		@$(ECHO) "\n"$(BOLD_T)$(GREEN_C)"[✔] Remake of lem-in" \
		$(LIGHT_GREEN)"\n"$(DEFAULT)
