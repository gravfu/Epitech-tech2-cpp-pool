##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build project
##

CC		=	g++

FLAGS		=	-Werror -Wall -Wextra

SRC		=	main.cpp

OBJ     	=       $(SRC:.cpp=.o)

NAME    	=       my_cat

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f *#

fclean:		clean
		rm -f $(NAME)

re:		fclean all

auteur:
		echo $(USER) > auteur

.PHONY: 	all clean fclean re tests_run
