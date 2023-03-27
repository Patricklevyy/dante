/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.petitjean
** File description:
** main
*/

#include "../lib/my.h"

int main(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return 84;
    else {
        put_recurs_limit();
        MAP_T *MAP = malloc(sizeof(MAP_T));
        MAP->map_x = atoi(av[1]);
        MAP->map_y = atoi(av[2]);
        MAP->get_ac = ac;
        srand(time(NULL));
        int length = atoi(av[2]);
        int width = atoi(av[1]);
        generate(length, width, MAP, av);
        free(MAP);
    }
    return 0;
}
