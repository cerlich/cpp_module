
.PHONY = all clean fclean re

NAME = ex03

CC = clang++

GFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

HEAD = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
 
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

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