.PHONY = all clean fclean re

NAME = zombie

CC = clang++

GFLAGS = -Wall -Wextra -Werror

HEAD = Zombie.hpp

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp

OBJS =$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

$(OBJS) : %.o : %.cpp $(HEAD)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all