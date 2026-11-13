NAME = tic-tac-toe

SRCS = main.c \
       tic-tac-toe.c

CFLAGS = -Wall -Wextra

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all