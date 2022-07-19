SRC =	Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

OBJ =	$(SRC:.cpp=.o)

INC =	Animal.hpp Cat.hpp Dog.hpp Brain.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

RM = rm -rf

NAME = a.out

all:	$(NAME)

%.o:	%.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
