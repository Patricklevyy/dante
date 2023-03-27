/*
** EPITECH PROJECT, 2023
** dante_back
** File description:
** gen
*/

#include "../lib/my.h"

int fnct_get_rnd(void)
{
    int i = rand() % 2;
    return i;
}

int fnct_bis_imp(int rndm_y)
{
    if (fnct_get_rnd() == 0)
        rndm_y += rand() % 2;
    else
        rndm_y = rndm_y - rand() % 2;
    return rndm_y;
}

int fnct_bis_per(int rndm_y)
{
    if (fnct_get_rnd() == 0)
        rndm_y += rand() % 2;
    else
        rndm_y = rndm_y - rand() % 2;
    return rndm_y;
}

void create_rndm_path_imp(MAP_T *MAP, int width, int length)
{
    int obj;
    if (MAP->map_x > MAP->map_y)
        obj = rand() % (MAP->map_x + 10);
    else
        obj = rand() % (MAP->map_y + 10);
    for (int i = 0; i <= obj; i++) {
        int rndm_x = rand() % (width / 4);
        int rndm_y = rand() % (length);
        for (; (rndm_x < width - 1 && rndm_y < length - 1) && (rndm_x >
        0 && rndm_y > 0);) {
            rndm_x += rand() % 2;
            MAP->map[rndm_y][rndm_x] = '*';
            rndm_y = fnct_bis_imp(rndm_y);
            MAP->map[rndm_y][rndm_x] = '*';
        }
    }
}
