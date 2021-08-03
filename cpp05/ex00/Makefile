
.PHONY = all clean fclean re

NAME = ex00

CC = clang++

GFLAGS = -Wall -Wextra -Werror 

HEAD = Bureaucrat.hpp
 
SRCS = main.cpp Bureaucrat.cpp

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