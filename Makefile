#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avallois <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 21:48:44 by avallois          #+#    #+#              #
#    Updated: 2018/08/21 19:02:52 by adhondt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc

FLAGS = -Wall -Wextra -Werror

CPP_FLAGS = -Iinclude

NAME = ft_ssl

SRC_PATH = ./src
INC_PATH = ./inc
OBJ_PATH = ./obj

SRC_NAME =	 main.c tools.c
INC_NAME = ft_ssl.h
OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))
LIB = lib/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C lib/
	@$(CC) $(FLAGS) $(OBJ) $(LIB) -o $(NAME)
	@echo "\033[1;34mft_ssl\t\t\033[1;33mCreation\t\033[0;32m[OK]\033[0m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@make clean -C lib/
	@rm -rf $(OBJ_PATH)
	@echo "\033[1;34mft_ssl\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@make fclean -C lib/
	@rm -rf $(NAME)
	@echo "\033[1;34mft_ssl\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all
