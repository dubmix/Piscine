# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwidmer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 17:12:06 by lwidmer           #+#    #+#              #
#    Updated: 2022/09/04 17:21:43 by pdelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Werror -Wall -Wextra
NAME = rush-02
SRC_DIR = srcs
HEADERDIR = includes
HEADER = ft.h
SRC = main.c ifargc2.c helper.c get_number.c mk_dct.c putnbrs.c

$(NAME):
	cc $(CFLAGS)  $(SRC) -o $(NAME)
	
clean:
	rm -f $(SRC_DIR)/*.o

fclean: clean
	rm $(NAME)

re: fclean all

all: $(NAME)

make: all
