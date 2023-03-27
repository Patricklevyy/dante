/*
** EPITECH PROJECT, 2022
** printf_test
** File description:
** my_strlen
*/
#include "my.h"

int my_strlen(const char str[])
{
    int i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    my_put_nbr(i);
}
