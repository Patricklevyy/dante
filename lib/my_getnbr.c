/*
** EPITECH PROJECT, 2022
** B-CPE-110-LYN-1-1-pushswap-gnanmienlie-patrick-levy.n-da
** File description:
** my_getnbr
*/

#include "../lib/my.h"

int check_numbers(char c)
{
    if (c <= '9' && c >= '0') {
        return 0;
    } else {
        return 1;
    }
}

int my_getnbr(char *str)
{
    int nb = 0;
    int x = 0;
    int i = 0;

    while (str[x] != '\0') {
        while (check_numbers(str[i]) == 1) {
            i++;
            x++;
        }
        nb = nb * 10;
        nb = (nb + (str[x] - 48));
        x++;
        if (check_numbers(str[x]) == 1 && str[i - 1] == '-')
            return (nb * -1);
        if (check_numbers(str[x]) == 1)
            return nb;
    }
    return nb;
}
