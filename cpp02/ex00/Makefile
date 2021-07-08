
.PHONY = all clean fclean re

NAME = ex00

CC = clang++

GFLAGS = -Wall -Wextra -Werror

HEAD = Fixed.hpp

SRCS = main.cpp Fixed.cpp

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