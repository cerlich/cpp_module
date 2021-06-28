.PHONY = all clean fclean re

NAME = karenFilter

CC = clang++

GFLAGS = -Wall -Wextra -Werror

HEAD = Karen.hpp

SRCS = main.cpp Karen.cpp

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