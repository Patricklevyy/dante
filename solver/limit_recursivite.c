/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-dante-axel.petitjean
** File description:
** limit_recursivite
*/

#include "../lib/my.h"

void put_recurs_limit(void)
{
    struct rlimit rec_lim;
    getrlimit(RLIMIT_STACK, &rec_lim);
    rec_lim.rlim_cur = 1000000000;
    rec_lim.rlim_max = 1000000000;
    setrlimit(RLIMIT_STACK, &rec_lim);
}
