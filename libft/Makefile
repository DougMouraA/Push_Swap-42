# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 12:41:13 by dmoura-a          #+#    #+#              #
#    Updated: 2023/01/11 14:05:20 by dmoura-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_isalpha \
        ft_isdigit \
        ft_tolower \
        ft_isalnum \
        ft_isascii \
        ft_isprint \
        ft_strlen \
        ft_memset \
        ft_bzero  \
        ft_memcpy \
        ft_memmove \
        ft_strlcpy \
        ft_strlcat \
        ft_toupper \
        ft_toupper \
        ft_strchr \
        ft_strrchr \
        ft_strncmp \
        ft_memchr \
        ft_memcmp \
        ft_strnstr \
        ft_atoi \
        ft_calloc \
        ft_strdup \
        ft_substr \
        ft_strjoin \
        ft_strtrim \
        ft_split \
        ft_itoa \
        ft_strmapi \
        ft_striteri \
        ft_putchar_fd \
        ft_putstr_fd \
        ft_putendl_fd \
        ft_putnbr_fd \
				ft_putchar \
				ft_puthex \
				ft_putnbr \
				ft_putnbr_u \
				ft_putpointer \
				ft_putstr \
				ft_printf \
				
SRCS_DIR = ./
SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(SRC_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@$(AR) $@ $^

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
