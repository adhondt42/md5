# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhondt <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 18:16:05 by adhondt           #+#    #+#              #
#    Updated: 2018/08/21 15:51:32 by adhondt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC = 	ft_atoi.c ft_chardup.c ft_itoa.c ft_itoa_base.c ft_memalloc.c \
		ft_memalloc_c.c ft_memset.c ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c \
		ft_strjoin.c ft_strjoin_f.c ft_strlen.c ft_strstr.c ft_strsub.c \
		get_next_line.c pos_in_str.c pos_str_tab.c ft_isnumber.c ft_isdigit.c \
		ft_bzero.c ft_atoi_base.c \

OBJ = $(SRC:.c=.o)
CC =  gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@$(CC) -c $(SRC) -Iinc/
	@ar rcs libft.a $(OBJ)
	@echo "\033[1;34mlibft.a\t\t\033[1;33mCreation\t\033[0;32m[OK]\033[0m"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f libft.a

re: fclean all

.PHONY: all clean fclean re
