/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.petitjean
** File description:
** update_char
*/

#include "../lib/my.h"

int apply_recurs_2(char **tab, int nb_rows, int nb_cols, int i, int j)
{
    if (i < 0 || i >= nb_rows || j < 0 || j >= nb_cols) {
        return 0;
    }
    if (tab[i][j] == 'P') {
        tab[i][j] = 'o';
        display_char(tab);
        free_tab(tab);
        exit(0);
    }
    if (tab[i][j] != '*') {
        return 0;
    }
    tab[i][j] = 'o';
    apply_recurs_2(tab, nb_rows, nb_cols, i + 1, j);
    apply_recurs_2(tab, nb_rows, nb_cols, i - 1, j);
    apply_recurs_2(tab, nb_rows, nb_cols, i, j + 1);
    apply_recurs_2(tab, nb_rows, nb_cols, i, j - 1);
    tab[i][j] = '*';
    return 0;
}

int apply_recurs(char **tab, int nb_rows, int nb_cols)
{
    int i = 0, j = 0;
    apply_recurs_2(tab, nb_rows, nb_cols, i, j);
}
