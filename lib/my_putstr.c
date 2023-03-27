/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-axel.petitjean
** File description:
** my_putstr
*/
#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
