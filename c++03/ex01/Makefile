SRC =	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ =	$(SRC:.cpp=.o)

INC =	ClapTrap.hpp ScavTrap.hpp

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
