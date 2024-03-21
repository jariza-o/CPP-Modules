# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 14:52:36 by jariza-o          #+#    #+#              #
#    Updated: 2024/03/21 14:52:58 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC		=	src/main.cpp \

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