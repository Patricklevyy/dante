/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.petitjean
** File description:
** base_dante
*/

#include "../lib/my.h"

void free_tab(char **tab)
{
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}

int base_solver(char **av)
{
    char *buffer = open_file(av[1]);
    int nb_rows = get_nb_rows(buffer);
    if (nb_rows == -1) {
        my_putstr("Wrong map");
        return -1;
    }
    int nb_cols = get_nb_cols(buffer);
    char **tab = malloc_char_array(buffer);
    change_map_char(tab, buffer);
    if (apply_recurs(tab, nb_rows, nb_cols))
        display_char(tab);
    else {
        printf("No solution found");
        return 0;
    }
    free(buffer);
    free_tab(tab);
}
