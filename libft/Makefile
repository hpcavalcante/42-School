# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hepiment <hepiment@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 18:27:12 by hepiment          #+#    #+#              #
#    Updated: 2022/06/12 22:57:19 by hepiment         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./libft.h

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_strchr.c ft_tolower.c ft_toupper.c ft_memcpy.c	\
		ft_memmove.c
		 
		

CFLAGS = -Wall -Wextra -Werror

CC = gcc

OBJS = ${SRCS:.c=.o}

all:	$(NAME)

$(NAME):	$(OBJS) $(BONUS_O)
			ar -rcs $(NAME) $(OBJS)
.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:

	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
