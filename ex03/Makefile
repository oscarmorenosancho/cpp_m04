# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 12:12:40 by omoreno-          #+#    #+#              #
#    Updated: 2023/07/18 17:34:19 by omoreno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= animals

CLASSSRC	:=	Materia.cpp MateriaSource.cpp Character.cpp

MAINSRC		:=	main.cpp

HEADER		:=	$(CLASSSRC:.cpp=.hpp)
CLASSOBJ	:=	$(CLASSSRC:.cpp=.o)
MAINOBJ		:=	$(MAINSRC:.cpp=.o)

CC			:=	@c++
RM			:=	@rm -f
CFLAGS		:=	-Wall -Werror -Wextra -std=c++98

all : $(NAME)

%.o : %.cpp ${HEADER} Makefile
	@echo "Compiling" $@
	${CC} ${CFLAGS} -c $< -o $@

$(NAME) : ${CLASSOBJ} ${MAINOBJ} ${HEADER} Makefile
	@echo "Linking" $@
	${CC} ${CFLAGS} ${CLASSOBJ} ${MAINOBJ} -o $@

clean :
	$(RM) $(CLASSOBJ)
	$(RM) $(MAINOBJ)
	@echo "Cleaned objects"

fclean : clean
	$(RM) $(NAME)
	@echo "Cleaned executable"

re: fclean all

.PHONY : clean fclean re all