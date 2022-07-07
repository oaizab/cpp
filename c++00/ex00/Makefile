SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

RM = rm -rf

NAME = megaphone

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re