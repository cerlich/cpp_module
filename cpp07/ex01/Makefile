.PHONY = all clean fclean re

NAME = ex01

CC = clang++

GFLAGS = -Wall -Wextra -Werror 

HEAD = iter.hpp
 
SRCS = main.cpp 

OBJS =$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(GFLAGS) $(OBJS) -o $(NAME)

$(OBJS) : %.o : %.cpp $(HEAD)
	$(CC) $(GFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all