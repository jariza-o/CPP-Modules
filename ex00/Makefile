# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 18:38:25 by jariza-o          #+#    #+#              #
#    Updated: 2024/03/19 20:41:35 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	 src/main.cpp src/Animal.cpp src/Dog.cpp src/Cat.cpp \

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Polymorphism

all:	$(NAME)
$(NAME): ${OBJ}
	@g++ ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	@rm -f ${OBJ}

fclean:	clean
	@rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re