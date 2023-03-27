##
## EPITECH PROJECT, 2022
## B-CPE-101-LYN-1-1-myprintf-axel.petitjean
## File description:
## Makefile
##

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = libprintf.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		rm $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f *.a $(NAME)

re:		fclean all
