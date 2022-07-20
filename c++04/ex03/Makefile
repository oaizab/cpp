SRC =	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ =	$(SRC:.cpp=.o)

INC =	AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMaterialSource.hpp Ice.hpp MateriaSource.hpp

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
