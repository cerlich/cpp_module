
.PHONY = all clean fclean re

NAME = ex00

CC = clang++

GFLAGS = -Wall -Wextra -Werror

HEAD = ClapTrap.hpp

SRCS = main.cpp ClapTrap.cpp

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