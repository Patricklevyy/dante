/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.petitjean
** File description:
** display
*/

#include "../lib/my.h"

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
