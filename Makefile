# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 15:24:46 by kdaumont          #+#    #+#              #
#    Updated: 2023/11/09 15:28:29 by kdaumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

C_FILES = # all files
			
#C_FILES_BONUS = # if bonus -> bonus files

OBJS_FILES = $(C_FILES:.c=.o)
#OBJS_FILES_BONUS = $(C_FILES_BONUS:.c=.o)

CC = cc
FLAGS = -Wall -Werror -Wextra

$(NAME):
	$(CC) $(FLAGS) -c $(C_FILES)
	ar rcs $(NAME) $(OBJS_FILES)

all: $(NAME)

#bonus: $(OBJS_FILES) $(OBJS_FILES_BONUS)
#		ar rcs $(NAME) $(OBJS_FILES) $(OBJS_FILES_BONUS)

clean:
		rm -rf $(OBJS_FILES) $(OBJS_FILES_BONUS)

fclean: clean
		rm -rf $(NAME)

re:
	fclean all