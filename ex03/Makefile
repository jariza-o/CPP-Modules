# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 14:52:36 by jariza-o          #+#    #+#              #
#    Updated: 2024/03/25 17:01:27 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Werror -Wextra -g -std=c++98

SRC		=	src/main.cpp src/AMateria.cpp src/Ice.cpp src/Cure.cpp src/Character.cpp src/MateriaSource.cpp \

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Interfaces

all:	$(NAME)
$(NAME): ${OBJ}
	@g++ ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	@rm -f ${OBJ}

fclean:	clean
	@rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re