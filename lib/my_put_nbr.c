/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/
#include "my.h"

int my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    if (n > 9) {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    } else
        my_putchar(n + '0');
    return (0);
}
