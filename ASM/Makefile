# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 00:10:56 by kiroussa          #+#    #+#              #
#    Updated: 2023/12/10 02:54:51 by kiroussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	dr-quine

FIRST_NAME	=	Colleen
FIRST_SRC	=	$(FIRST_NAME).s
FIRST_OBJ	=	$(FIRST_SRC:.c=.o)

SECOND_NAME	=	Grace
SECOND_SRC	=	$(SECOND_NAME).s
SECOND_OBJ	=	$(SECOND_SRC:.c=.o)

THIRD_NAME	=	Sully
THIRD_SRC	=	$(THIRD_NAME).s
THIRD_OBJ	=	$(THIRD_SRC:.c=.o)

NASM		=	nasm
NASM_FLAGS	=	-f macho64

CC			=	clang
CFLAGS		=	-Wall -Wextra -Werror

all: $(FIRST_NAME) $(SECOND_NAME) $(THIRD_NAME)

$(FIRST_NAME): $(FIRST_OBJ)
	$(CC) $(CFLAGS) $(FIRST_OBJ) -o $(FIRST_NAME)

$(SECOND_NAME): $(SECOND_OBJ)
	$(CC) $(CFLAGS) $(SECOND_OBJ) -o $(SECOND_NAME)

$(THIRD_NAME): $(THIRD_OBJ)
	$(CC) $(CFLAGS) $(THIRD_OBJ) -o $(THIRD_NAME)

%.o: %.s
	$(NASM) $(NASM_FLAGS) $< -o $@

clean:
	rm -f $(FIRST_OBJ) $(SECOND_OBJ) $(THIRD_OBJ)

fclean: clean
	rm -f $(FIRST_NAME) $(SECOND_NAME) $(THIRD_NAME)

re: fclean all

.PHONY: all clean fclean re
