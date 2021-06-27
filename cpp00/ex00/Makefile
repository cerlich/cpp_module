.PHONY = all clean fclean re

NAME = megaphone

CC = clang++

GFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

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