NAME = test
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror

SRCS =  main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp \

OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re c11

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

c11: CXXFLAGS += -std=c++11
c11: re
