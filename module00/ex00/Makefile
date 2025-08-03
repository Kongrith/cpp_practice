NAME = megaphone

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
LINK_CFLAGS = $(CFLAGS)

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)
	@echo "built $(NAME) successfully"

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(LINK_CFLAGS) -o $(NAME)

%.o: %.c
	$(CXX) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all