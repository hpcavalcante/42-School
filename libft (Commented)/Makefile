# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hepiment < hepiment@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 18:27:12 by hepiment          #+#    #+#              #
#    Updated: 2022/06/18 23:40:30 by hepiment         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do arquivo compilado
NAME = libft.a

# Bibliotecas a serem usadas
HEADER = ./libft.h

# Arquivos das funções a serem usadas
SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_strchr.c ft_tolower.c ft_toupper.c ft_memcpy.c	\
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_strdup.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_calloc.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_substr.c
		 
		
# Flags de compilação
CFLAGS = -Wall -Wextra -Werror

# Compilador a ser usado
CC = gcc

# Transformar todos os arquivos .c de funções dos SRCS em objetos .o
OBJS = ${SRCS:.c=.o}

# Juntar todos os arquivos no executável do arquivo final, usando as flags de compilação e transformando todas as funções em objetos
all:	$(NAME)

$(NAME):	$(OBJS) $(BONUS_O)
			ar -rcs $(NAME) $(OBJS)
.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Função usada com "make clean" que deleta todos os arquivos .o criados na compilação
clean:

	rm -f $(OBJS)

# Função usada com "make fclean" que deleta todos os arquivos criados na compilação
fclean: clean
	rm -f $(NAME)

re: fclean all
