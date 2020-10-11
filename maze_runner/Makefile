NAME = maze.a

SRC =

OBJP = $(SRC:.cpp=.o)

	CFLAGS = -Wall -Wextra -Werror
	CC = g++ -g

all: $(NAME) maze

maze: $(OBJP)
		$(CC) $(CFLAGS) $(OBJP) -o maze

$(LIBFT):
		make -C all
%.o: %.cpp
		$(CC) $(CFLAGS) -cpp $< -o $@ -I.

clean:
		make -C clean
			rm -f *.o
fclean: clean
		make -C fclean
			rm -f maze
re: fclean all
