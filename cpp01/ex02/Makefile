.PHONY = all clean fclean re

NAME = ex02

CC = clang++

GFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

OBJS =$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

$(OBJS) : %.o : %.cpp

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all