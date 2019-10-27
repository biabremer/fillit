# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bbremer <bbremer@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/15 14:53:31 by bvan-de-       #+#    #+#                 #
#    Updated: 2019/10/27 16:40:42 by bbremer       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= fillit

SRC_FILES = checker_entry error_entry fillit_drawer input_generator\
		square_maker tetr_list_functions tetrimi_printer\
		tetrimino_coord_1_2 tetrimino_coord_3 tetrimino_coord_4_7\
		tetrimino_coord_8_11 tetrimino_coord_12_15 tetrimino_coord_16_19\
		tetrimino_coord tetrimino_eraser valid_entry valid_tetrimi_1_2\
		valid_tetrimi_3 valid_tetrimi_4_7 valid_tetrimi_8_11\
		valid_tetrimi_12_15 valid_tetrimi_16_19 support_functions_1\
		support_functions_2 support_functions_3 main\

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = includes/

SRC = $(addprefix $(SRC_DIR),$(addsuffix .c,$(SRC_FILES)))
OBJ = $(addprefix $(OBJ_DIR),$(addsuffix .o,$(SRC_FILES)))

FLAG = -Wall -Wextra -Werror

END:="\033[0;0m"
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
CYAN:="\033[1;35m"
PURPLE:="\033[1;36m"
WHITE:="\033[1;37m"

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@gcc $(FLAG) -I $(INC_DIR) -o $@ -c $<

$(NAME): obj $(OBJ)
	@echo $(CYAN) " - Compiling $@" $(END)
	@gcc $(FLAG) -o $(NAME) $(OBJ)
	@echo $(GREEN) " - Done" $(END)
   
clean:
	@echo $(CYAN) " - Deleting objects" $(END)
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo $(GREEN) " - Done" $(END)

fclean: clean
	@echo $(CYAN) " - Deleting executable" $(END)
	@/bin/rm -rf $(NAME)
	@echo $(GREEN) " - Done" $(END)

re: fclean all
