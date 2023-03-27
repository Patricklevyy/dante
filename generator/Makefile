##
## EPITECH PROJECT, 2023
## B-CPE-200-LYN-2-1-dante-axel.petitjean
## File description:
## Makefile
##

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = generator

CFLAGS = -g3 -Wall -Wextra -L ../lib/ -l printf

ECHO         =         /bin/echo -e
DEFAULT      =         "\033[00m"
BOLD         =         "\e[1m"
RED          =         "\e[31m"
GREEN        =         "\e[32m"
LIGHT_BLUE   =         "\e[94m"
WHITE        =         "\e[1;37m"

all: ${NAME}

${NAME}: ${OBJ}
		echo
		$(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
		"SRC files sucessfully build. "$(DEFAULT)
		gcc ${OBJ} -o ${NAME} ${CFLAGS} \
		&& $(ECHO) $(BOLD) $(GREEN)"\n► BUILD SUCCESS !"$(DEFAULT) \
		|| ($(ECHO) $(BOLD) $(RED)"\n► BUILD FAILED"$(DEFAULT) && exit 1)
		rm $(OBJ)

clean:
	rm -rf $(OBJ)
	$(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" Clean SRC "$(DEFAULT)

fclean: clean
	rm -f ${NAME}
	rm -f *.o
	($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" Fclean SRC "$(DEFAULT))

re: fclean all

.PHONY: all clean fclean re
