NAME = maze.a

CFLAGS = -Wall -Wextra -Werror

CPP = g++

SRC = 

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
		$(CPP) $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re:		fclean all
