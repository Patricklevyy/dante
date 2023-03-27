##
## EPITECH PROJECT, 2023
## B-CPE-200-LYN-2-1-dante-axel.petitjean
## File description:
## Makefile
##

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = solver

CFLAGS = -g3

all:	$(NAME)

$(NAME):
		gcc -o $(NAME) $(SRC) -L ../lib/ -l printf $(CFLAGS)

clean:
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re:		fclean all
