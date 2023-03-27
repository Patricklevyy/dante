/*
** EPITECH PROJECT, 2023
** dante_back
** File description:
** new_fnct
*/
#include "../lib/my.h"

char *get_where_can_go(MAP_T *MAP, int pos_x, int pos_y)
{
    char *res = malloc(sizeof(char) * 4);
    int indice = 0;
    if (pos_y < MAP->map_y - 2 && MAP->map[pos_y + 2][pos_x] == '1') {
        res[indice] = 'B';
        indice++;
    }
    if (pos_y >= 2 && MAP->map[pos_y - 2][pos_x] == '1') {
        res[indice] = 'H';
        indice++;
    }
    if (pos_x < MAP->map_x - 2 && MAP->map[pos_y][pos_x + 2] == '1') {
        res[indice] = 'D';
        indice++;
    }
    if (pos_x >= 2 && MAP->map[pos_y][pos_x - 2] == '1') {
        res[indice] = 'G';
        indice++;
    }
    res[indice] = '\0'; return res;
}

void modif_map(MAP_T *MAP)
{
    int i;
    int y;
    for (i = 0; i < MAP->map_y;) {
        for (y = 0; y < MAP->map_x;) {
            MAP->map[i][y] = '1';
            y = y + 2;
        }
        i = i + 2;
    }
    MAP->map[0][0] = '*';
    if (MAP->map_x % 2 == 0 || MAP->map_y % 2 == 0) {
        if (MAP->map_x % 2 == 0 && MAP->map_y % 2 == 0) {
            MAP->map[MAP->map_y - 1][MAP->map_x - 1] = '*';
            MAP->map[MAP->map_y - 2][MAP->map_x - 1] = '*';
        } else
            MAP->map[MAP->map_y - 1][MAP->map_x - 1] = '*';
    }
}

void display_char(char **tab)
{
    int i;
    int space = 0;
    for (i = 0; tab[i] != NULL; i++, space++) {
        if (space != 0)
            my_putstr("\n");
        write(1, tab[i], strlen(tab[i]));
    }
}

void put_recurs_limit(void)
{
    struct rlimit rec_lim;
    getrlimit(RLIMIT_STACK, &rec_lim);
    rec_lim.rlim_cur = 1000000000;
    rec_lim.rlim_max = 1000000000;
    setrlimit(RLIMIT_STACK, &rec_lim);
}
