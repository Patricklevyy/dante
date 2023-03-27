/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.petitjean
** File description:
** fill_char_int
*/

#include "../lib/my.h"

char **change_map_char(char **tab, char *buffer)
{
    int p = 0;
    int s = 0;
    int nb_rows = get_nb_rows(buffer);
    int nb_cols = get_nb_cols(buffer);
    int m = 0;
    for (p = 0; p != nb_rows; p++) {
        for (s = 0; s != nb_cols; s++) {
            tab[p][s] = buffer[m];
            m++;
        }
        tab[p][s] = '\0';
        m++;
    }
    if (tab[p - 1][s - 1] == '*')
        tab[p - 1][s - 1] = 'P';
    tab[p] = NULL;
    buffer[m] = '\0';
    return (tab);
}
