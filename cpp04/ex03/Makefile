
.PHONY = all clean fclean re

NAME = materia

CC = clang++

GFLAGS = -Wall -Wextra -Werror

HEAD = AMateria.hpp Character.hpp Cure.hpp \
		Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp \
		Ice.cpp MateriaSource.cpp

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