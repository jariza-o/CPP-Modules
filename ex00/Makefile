# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 16:23:52 by jariza-o          #+#    #+#              #
#    Updated: 2024/02/28 09:23:38 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	src/main.cpp src/newZombie.cpp src/randomChump.cpp src/Zombie.cpp \

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Zombie

all:	$(NAME)
$(NAME): ${OBJ}
	@g++ ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	@rm -f ${OBJ}

fclean:	clean
	@rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re