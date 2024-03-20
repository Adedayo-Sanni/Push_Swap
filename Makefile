# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asanni <asanni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 16:50:05 by asanni            #+#    #+#              #
#    Updated: 2024/03/09 15:38:36 by asanni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

#--------------FLAGS----------------------------#
CFLAGS = -Wall -Werror -Wextra -g3
#--------------PATHS----------------------------#

OBJFOLDER = objs/
SOURCES = sources/

P_LIBFT = libft/
LIBFT = $(P_LIBFT)libft.a
LINCLUDES = -L./libft -lft
#--------------FILES----------------------------#
SRC = sources/free_stack.c \
sources/main.c \
sources/make_stack.c \
sources/node_func.c \
sources/push_funcs.c \
sources/revrotate_funcs.c \
sources/rotate_funcs.c \
sources/sort_stack.c \
sources/sort.c \
sources/swap_funcs.c \
sources/verif.c \

#--------------RULES----------------------------#

OBJFILES = $(subst $(SOURCES),$(OBJFOLDER),$(SRC:.c=.o))

all: comp_lib $(OBJFOLDER) $(NAME)

comp_lib:
	@$(MAKE) -sC $(P_LIBFT)

$(OBJFOLDER):
	@mkdir $(OBJFOLDER)

$(NAME): $(OBJFILES)
	$(CC) $(OBJFILES) $(H_LIB) $(LIBFT) $(LINCLUDES) $(CFLAGS) -o $(NAME) -g

$(OBJFOLDER)%.o : $(SOURCES)%.c
	cc $(HEADERS) -c $< -o $@ -g3 

#----------------CLEAN--------------------------#

clean:
	rm -f $(OBJFILES) -r $(OBJFOLDER)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
