SRC =	Contact.cpp \
		PhoneBook.cpp \
		main.cpp \
		utils.cpp

OBJ = $(SRC:.cpp=.o)

INC =	Contact.hpp \
		PhoneBook.hpp \
		utils.hpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

RM = rm -rf

NAME = phonebook

all: $(NAME)

%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re