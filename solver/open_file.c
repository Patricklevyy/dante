/*
** EPITECH PROJECT, 2023
** solver
** File description:
** open_file
*/

#include "../lib/my.h"

char *open_file(char *filepath)
{
    struct stat pln;
    stat(filepath, &pln);
    char *buffer = malloc(sizeof(char) * (pln.st_size + 1));

    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return NULL;
    if (read(fd, buffer, pln.st_size) == 0)
        return NULL;

    buffer[pln.st_size] = '\0';
    close(fd);
    return (buffer);
}
