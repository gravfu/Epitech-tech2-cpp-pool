##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build project
##

CC		=	gcc

FLAGS		=	-std=gnu11 -Wall -Wextra

MAIN		=	main.c

SRC		=	z.c

OBJ     	=       $(SRC:.c=.o)

NAME    	=       z

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f *#

fclean:		clean
		rm -f $(NAME)
		rm -f *.gcda
		rm -f *.gcno

re:		fclean all

auteur:
		echo $(USER) > auteur

.PHONY: 	all clean fclean re tests_run
