# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 14:31:47 by jariza-o          #+#    #+#              #
#    Updated: 2024/03/14 18:58:28 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Werror -Wextra -Wno-shadow -std=c++98

SRC		=	 src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp src/DiamondTrap.cpp \

OBJ		=	$(SRC:.cpp=.o)

NAME	=	DiamondTrap

all:	$(NAME)
$(NAME): ${OBJ}
	@g++ ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	@rm -f ${OBJ}

fclean:	clean
	@rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re