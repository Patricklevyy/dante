/*
** EPITECH PROJECT, 2027
** B-CPE-100-LYN-1-1-cpoolday03-axel.petitjean
** File description:
** my_putchar
*/
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
