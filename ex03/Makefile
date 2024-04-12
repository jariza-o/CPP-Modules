# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 17:07:46 by jariza-o          #+#    #+#              #
#    Updated: 2024/04/12 12:39:56 by jariza-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g

SRC		=	src/main.cpp src/Bureaucrat.cpp src/AForm.cpp src/PresidentialPardonForm.cpp src/RobotomyRequestForm.cpp \
			src/ShrubberyCreationForm.cpp src/Intern.cpp\

OBJ		=	$(addprefix obj/, $(SRC:.cpp=.o)) # addprefix añade a cada archivo .o el obj/

NAME	=	Bureaucrat

all:	$(NAME)
$(NAME): ${OBJ}
	@g++ ${CFLAGS} ${OBJ} -o ${NAME}

obj/%.o: %.cpp
	@mkdir -p $(dir $@) # dir es uan funcion de Make que extrae el directorio de un archivo objetivo ('$@') || $@ representa el objetivo de la regla
	@g++ ${CFLAGS} -c $< -o $@ # compila los archivos fuente ($<) en archivos objetivo $@

clean:
	@rm -rf ${OBJ} obj/

fclean:	clean
	@rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re
