/*
** EPITECH PROJECT, 2023
** solver
** File description:
** get_nb
*/

#include "../lib/my.h"

int get_nb_rows(char *buffer)
{
    int s = 0;
    int nb_rows = 0;
    for (s = 0; buffer[s] != '\0'; s++) {
        if (buffer[s] == '\n') {
            nb_rows++;
        }
    }
    if (buffer[s - 1] == '\n')
        return -1;
    return (nb_rows + 1);
}

int get_nb_cols(char *buffer)
{
    int nb_cols = 0;
    for (int t = 0; buffer[t] != '\n'; t++) {
        nb_cols++;
    }
    return nb_cols;
}
