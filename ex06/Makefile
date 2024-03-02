# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 10:17:30 by jariza-o          #+#    #+#              #
#    Updated: 2024/03/02 14:55:03 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	 src/main.cpp src/Harl.cpp\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Harl

all:	$(NAME)
$(NAME): ${OBJ}
	@g++ ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	@rm -f ${OBJ}

fclean:	clean
	@rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re