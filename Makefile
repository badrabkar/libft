# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babkar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 15:22:25 by babkar            #+#    #+#              #
#    Updated: 2021/11/19 17:05:44 by babkar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCDIR = src
OBJDIR = obj
INCLUDES = includes/libft.h
SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $^ 

$(OBJDIR)/%.o : $(SRCDIR)/%.c $(INCLUDES) | $(OBJDIR) 
	$(CC) $(FLAGS) -c $< -o $@ 

$(OBJDIR) :
	mkdir -p $@

clean : 
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all
