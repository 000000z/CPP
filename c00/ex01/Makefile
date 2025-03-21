NAME = Phonebook
SRC = Phonebook.cpp 
OBJS = $(SRC:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = clang++

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
