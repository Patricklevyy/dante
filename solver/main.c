/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.petitjean
** File description:
** main
*/

#include "../lib/my.h"

int main(int ac, char **av)
{
    struct stat pln;
    if (ac != 2)
        return 84;
    else {
        put_recurs_limit();
        if (stat(av[1], &pln) != 0) {
            return 84;
        }
        if (base_solver(av) == -1)
            return 84;
    }
    return 0;
}
