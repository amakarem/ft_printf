# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 23:01:14 by aelaaser          #+#    #+#              #
#    Updated: 2024/10/18 21:55:57 by aelaaser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Source files
SRCS = 	ft_memaddress.c ft_nbrtohexadecimal.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunsignednbr.c ft_revstr.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

# Library name
NAME = libftprintf.a

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Clean up build files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	 rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re