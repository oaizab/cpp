SRC =	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
		Intern.cpp

OBJ =	$(SRC:.cpp=.o)

INC =	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
		PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
		Intern.hpp

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
