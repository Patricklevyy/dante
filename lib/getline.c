/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-bsantman-gnanmienlie-patrick-levy.n-da
** File description:
** getline
*/

#include "../lib/my.h"

char *my_getline(char *filepath, int ind)
{
    struct stat pln;
    stat(filepath, &pln);
    char *line = malloc(sizeof(char) * (pln.st_size + 1));
    int count = 0; int i = 0; int q = 0;
    int fd = open(filepath, O_RDONLY);
    char *tmp = malloc(sizeof(char) * 10000);
    read(fd, line, pln.st_size);
    for (i = 0; i < pln.st_size && count != ind; i++) {
        if (line[i] == '\n') {
            count++;
        }
    }
    for (; i < pln.st_size && line[i] != '\n'; i++) {
        tmp[q] = line[i];
        q++;
    } tmp[q] = '\0';
    if (ind > count) {
        free(line);
        return NULL;
    } close(fd); free(line); return (tmp);
}
