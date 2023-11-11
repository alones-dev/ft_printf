# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 15:24:46 by kdaumont          #+#    #+#              #
#    Updated: 2023/11/11 08:01:36 by kdaumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

C_FILES = ft_printf.c utils_printf.c
			
OBJS_FILES = $(C_FILES:.c=.o)

CC = cc
FLAGS = -Wall -Werror -Wextra

$(NAME):${OBJS_FILES}
	ar rcs $(NAME) $(OBJS_FILES)

all: $(NAME)

clean:
		rm -rf $(OBJS_FILES) $(OBJS_FILES_BONUS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(C_FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJS_FILES)