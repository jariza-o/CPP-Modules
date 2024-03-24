# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 14:52:36 by jariza-o          #+#    #+#              #
#    Updated: 2024/03/24 17:28:25 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Werror -Wextra -Wno-shadow -std=c++98

SRC		=	src/main.cpp src/AMateria.cpp src/Ice.cpp src/Cure.cpp src/Character.cpp src/MateriaSource.hpp \

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