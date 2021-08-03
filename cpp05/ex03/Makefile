
.PHONY = all clean fclean re

NAME = ex03

CC = clang++

GFLAGS = -Wall -Wextra -Werror 

HEAD = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

SRCS = main.cpp Bureaucrat.cpp Form.cpp \
	ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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