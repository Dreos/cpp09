SRCS = main.cpp RNP.cpp

NAME = RNP

OBJ = $(SRCS:.cpp=.o)

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAG) -o $@ -c $^ 

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
