# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/15 12:32:13 by ssabbah           #+#    #+#              #
#    Updated: 2017/10/09 15:21:58 by ssabbah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	fillit

SRC=	ft_checktetro.c\
		ft_checkfile.c\
		ft_checkline.c\
		ft_errorcheck.c\
		ft_errormsg.c\
		ft_filetostr.c\
		ft_minsquare.c\
		ft_array.c\
		ft_algotetro.c\
		ft_tetroinit.c\
		ft_makegrid.c\
		ft_tetrotogrid.c\

OBJ= $(addprefix $(OBJDIR), $(SRC:.c=.o))	

CC=	gcc

CFLAGS= -Wall -Wextra -Werror

LIBFT= ./libft/libft.a
LIBINC= -I ./libft
LIBLINK= -L ./libft -lft

SRCDIR= ./src/
INCDIR= ./includes/
OBJDIR= ./obj/


all: $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $(LIBINC) -I $(INCDIR) -o $@ -c $<

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft

$(NAME): obj libft $(OBJ)
	$(CC) $(LIBLINK) -o $(NAME) $(OBJ)

remlib:
	rm -rf $(LIBFT)

remoblib:
	make fclean -C ./libft/

clean: remoblib
	rm -rf $(NAME)

fclean: clean remlib
	rm -rf $(NAME)

re: fclean all
