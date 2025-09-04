CC = c++

CPPFLAGS = -Wall -Wextra -Wall -std=c++98

NAME = megaphone

RM = rm -f

all: $(NAME)

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re