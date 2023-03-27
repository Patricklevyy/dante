##
## EPITECH PROJECT, 2023
## B-CPE-200-LYN-2-1-dante-axel.petitjean
## File description:
## Makefile
##

SOLVER = cd solver/ make

GENERATOR = cd ../generator/ make

all:
	cd lib/ && make && cd ..
	cd solver/ && make && cd ..
	cd generator/ && make && cd ..

clean:
		cd lib/ && make fclean && cd ..

fclean: clean
		rm -f solver/solver && rm -f generator/generator

re:		fclean all

.PHONY: all, clean, fclean, re
