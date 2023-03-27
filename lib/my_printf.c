/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** my_printf.c
*/

#include "my.h"

int my_printf(const char *format, ...)
{
    va_list parametre;
    va_start(parametre, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            my_putchar(format[i]);
        } else {
            switch (format[i + 1]) {
                case ('d'): my_put_nbr(va_arg(parametre, int)); i++; break;
                case ('i'): my_put_nbr(va_arg(parametre, int)); i++; break;
                case ('s'): my_putstr(va_arg(parametre, char *)); i++; break;
                case ('c'): my_putchar(va_arg(parametre, int)); i++; break;
                case ('%'): my_putchar('%'); i++; break;
                default: return (84);
            }
        }
    }
    va_end(parametre);
    return (0);
}
