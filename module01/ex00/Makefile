NAME = zombie

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
LINK_CFLAGS = $(CFLAGS)

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)
	@echo "built $(NAME) successfully"

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(LINK_CFLAGS) -o $(NAME)

debug:
	$(CXX) -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -o $(NAME) $(SRCS)

%.o: %.c
	$(CXX) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all