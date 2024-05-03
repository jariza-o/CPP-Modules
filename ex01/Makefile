# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 22:15:12 by jariza-o          #+#    #+#              #
#    Updated: 2024/05/03 22:15:25 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g

SRC		=	src/main.cpp src/RPN.cpp \

OBJ		=	$(addprefix obj/, $(SRC:.cpp=.o))

NAME	=	RPN

all:	$(NAME)
$(NAME): ${OBJ}
	@g++ ${CFLAGS} ${OBJ} -o ${NAME}

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@g++ ${CFLAGS} -c $< -o $@

clean:
	@rm -rf ${OBJ} obj/

fclean:	clean
	@rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re