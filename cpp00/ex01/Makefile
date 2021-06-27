.PHONY = all clean fclean re

NAME = phonebook

CC = clang++

GFLAGS = -Wall -Wextra -Werror

HEAD = phonebook.hpp 

SRCS = contacts.cpp main.cpp

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