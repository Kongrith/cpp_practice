NAME = test

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp 
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)
	@echo "built $(NAME) successfully"

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@ 

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all