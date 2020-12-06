CC		=	g++

SRC		=	src/main.cpp 			\
			src/Planet.cpp			\
			src/RandomGenerator.cpp

OBJ		=	$(SRC:.cpp=.o)

NAME	=	procjam

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lSDL2

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
