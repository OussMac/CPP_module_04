CPP = c++ -std=c++98
FLAGS = -Wall -Werror -Wextra
NAME = Animal
HEADER = Animal.hpp Dog.hpp Cat.hpp
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $^ -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CPP) $(FLAGS) -c $< -o $@

re: fclean all

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

.PHONY: clean