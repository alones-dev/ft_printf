# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 15:24:46 by kdaumont          #+#    #+#              #
#    Updated: 2023/11/10 10:10:08 by kdaumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

C_FILES = # all files
			
OBJS_FILES = $(C_FILES:.c=.o)

CC = cc
FLAGS = -Wall -Werror -Wextra

$(NAME):
	$(CC) $(FLAGS) -c $(C_FILES)
	ar rcs $(NAME) $(OBJS_FILES)

all: $(NAME)

clean:
		rm -rf $(OBJS_FILES) $(OBJS_FILES_BONUS)

fclean: clean
		rm -rf $(NAME)

re:
	fclean all