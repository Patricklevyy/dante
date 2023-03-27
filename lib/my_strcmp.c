/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-bsantman-gnanmienlie-patrick-levy.n-da
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int l;
    for (l = 0; s2[l] != '\0' && s1[l]; l++){
        if (s1[l] == s2[l]) {
            return 0;
        }
        if (s1[l] < s2[l]) {
            return -1;
        }
        if (s1[l] > s2[l]) {
            return 1;
        }
    }
}
