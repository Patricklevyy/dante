/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.petitjean
** File description:
** create_lab
*/

#include "../lib/my.h"

void condition_move(MAP_T *MAP, char lettre, int pos_x, int pos_y)
{
        if (lettre == 'B') {
            MAP->map[pos_y + 1][pos_x] = '*';
            MAP->map[pos_y + 2][pos_x] = '*';
            create_rndm_path_per(MAP, pos_x, pos_y + 2);
        }
        if (lettre == 'H') {
            MAP->map[pos_y - 1][pos_x] = '*';
            MAP->map[pos_y - 2][pos_x] = '*';
            create_rndm_path_per(MAP, pos_x, pos_y - 2);
        }
        if (lettre == 'D') {
            MAP->map[pos_y][pos_x + 1] = '*';
            MAP->map[pos_y][pos_x + 2] = '*';
            create_rndm_path_per(MAP, pos_x + 2, pos_y);
        }
        if (lettre == 'G') {
            MAP->map[pos_y][pos_x - 1] = '*'; MAP->map[pos_y][pos_x - 2] = '*';
            create_rndm_path_per(MAP, pos_x - 2, pos_y);
        }
}

void create_rndm_path_per(MAP_T *MAP, int pos_x, int pos_y)
{
    char *get_nbr_poss = get_where_can_go(MAP, pos_x, pos_y);
    int nb_poss = strlen(get_nbr_poss);
    while (nb_poss != 0) {
        int chemin = rand() % nb_poss;
        condition_move(MAP, get_nbr_poss[chemin], pos_x, pos_y);
        free(get_nbr_poss);
        get_nbr_poss = get_where_can_go(MAP, pos_x, pos_y);
        nb_poss = strlen(get_nbr_poss);
    }
    free(get_nbr_poss);
}

void create_map_imp(MAP_T *MAP, int width, int length)
{
    MAP->pos_x = 0; MAP->pos_y = 0;
    MAP->map[MAP->pos_y][MAP->pos_x] = '*';
    for (int i = 0; MAP->pos_x < width - 1 && MAP->pos_y < length - 1; i++) {
        if ((MAP->pos_x += rand() % 2 != 0))
            MAP->map[MAP->pos_y][MAP->pos_x] = '*';
        if ((MAP->pos_y += rand() % 2 != 0))
            MAP->map[MAP->pos_y][MAP->pos_x] = '*';
    }
    if (MAP->pos_x == width - 1 && MAP->pos_y != length - 1) {
        for (; MAP->pos_y < length;) {
            MAP->map[MAP->pos_y][MAP->pos_x] = '*';
            MAP->pos_y++;
        }
    }
    if (MAP->pos_x != width - 1 && MAP->pos_y == length - 1) {
        for (; MAP->pos_x < width;) {
            MAP->map[MAP->pos_y][MAP->pos_x] = '*';
            MAP->pos_x++;
        }
    }
}

void create_map(MAP_T *MAP, int width, int length)
{
    MAP->pos_x = 0; MAP->pos_y = 0;
    MAP->map[MAP->pos_y][MAP->pos_x] = '*';
    for (; MAP->pos_y < length - 1; MAP->pos_y++)
        MAP->map[MAP->pos_y][MAP->pos_x] = '*';
    for (; MAP->pos_x < width - 1; MAP->pos_x++)
        MAP->map[MAP->pos_y][MAP->pos_x] = '*';
    MAP->map[MAP->pos_y][MAP->pos_x] = '*';
}

void generate(int length, int width, MAP_T *MAP, char **av)
{
    int i = 0; int y = 0; int z = 0;
    MAP->map = malloc(sizeof(char *) * (length + 1));
    for (; i != length; i++)
        MAP->map[i] = malloc(sizeof(char) * (width + 1));
    for (y = 0; y != length; y++) {
        for (z = 0; z != width; z++)
            MAP->map[y][z] = 'X';
        MAP->map[y][z] = '\0';
    } MAP->map[y] = NULL;
    if (MAP->get_ac == 4 && strcmp(av[3], "perfect") == 0) {
        modif_map(MAP); MAP->pos_y = 0; MAP->pos_x = 0;
        create_rndm_path_per(MAP, MAP->pos_x, MAP->pos_y);
    } else {
        create_rndm_path_imp(MAP, width, length);
        create_map_imp(MAP, width, length);
    }
    display_char(MAP->map); for (i = 0; MAP->map[i] != NULL; i++) {
        free(MAP->map[i]);
    }
    free(MAP->map);
}
