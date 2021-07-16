
.PHONY = all clean fclean re

NAME = animal

CC = clang++

GFLAGS = -Wall -Wextra -Werror

HEAD = Cat.hpp Dog.hpp AAnimal.hpp Brain.hpp

SRCS = main.cpp Cat.cpp Dog.cpp AAnimal.cpp Brain.cpp

OBJS =$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(GFLAGS) $(SRCS) -o $(NAME)

$(OBJS) : %.o : %.cpp $(HEAD)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all