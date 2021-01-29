##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile to build project
##

SRC	:=	$(filter-out main.c, $(wildcard *.c))

OBJ	=	$(SRC:.c=.o)

NAME	=	libstring.a

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -c $(SRC) -std=gnu11 -Wall -Wextra
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

auteur:
		echo $(USER) > auteur

.PHONY:         all clean fclean re tests_run
