/*
** EPITECH PROJECT, 2023
** solver
** File description:
** malloc_int_char
*/

#include "../lib/my.h"

char **malloc_char_array(char *str)
{
    int nb_cols = get_nb_cols(str);
    int nb_rows = get_nb_rows(str);
    int i = 0;
    char **tab = malloc(sizeof(char *) * (nb_rows + 1));
    for (; i != nb_rows; i++) {
        tab[i] = malloc(sizeof(char) * (nb_cols + 1));
    }
    tab[i] = NULL;
    return (tab);
}
