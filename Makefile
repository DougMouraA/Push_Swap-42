# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 12:10:16 by dmoura-a          #+#    #+#              #
#    Updated: 2023/01/11 12:12:17 by dmoura-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =    push_swap

CC            =    cc
FLAGS        =    -g -Wall -Wextra -Werror
RM            =    rm -rf

LIBFT_PATH    =    ./libft/libft.a

FILES    =    main \
							checker_error \
							operations_s	\
							operations_p \
							operations_r \
							operations_rr \
							sort_by_five \
							sort_by_three \
							calculate_move \
							check_position 	\
							index						\
							move \
							quicksort \
							utils \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
					@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
				@cd libft && $(MAKE)
				@$(CC) -o $@ $^ $(LIBFT_PATH)
				@printf "Compiled \n"

all: $(NAME)

clean:
				@cd libft && $(MAKE) clean
				@$(RM) $(OBJS) $(BOBJS)
				@printf "Objects Deleted  \n"

fclean:    clean
				@cd libft && $(MAKE) fclean
				@$(RM) $(NAME)
				@printf "file Deleted  \n"

re:                fclean all

.PHONY:        all clean fclean re libft
