/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
    #define __MY_H__

    #include <stdlib.h>
    #include <string.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <sys/stat.h>
    #include <stdarg.h>
    #include <sys/resource.h>
    #include <time.h>

    typedef struct MAP {
        char **map;
        int pos_y;
        int pos_x;
        int map_x;
        int map_y;
        int get_ac;
    } MAP_T;

    int my_printf(const char *format, ...);
    int my_put_nbr(int n);
    void my_putchar(char c);
    int my_putstr(char const *str);
    int my_strlen(const char str[]);
    int my_getnbr(char *str);
    char *my_getline(char *filepath, int ind);
    int my_strcmp(char const *s1, char const *s2);
    int base_solver(char **av);
    int get_nb_rows(char *buffer);
    int get_nb_cols(char *buffer);
    char **malloc_char_array(char *str);
    char *open_file(char *filepath);
    char **change_map_char(char **tab, char *buffer);
    void display_char(char **tab);
    int apply_recurs(char **tab, int nb_rows, int nb_cols);
    void free_tab(char **tab);
    void put_recurs_limit(void);
    void create_rndm_path_imp(MAP_T *MAP, int width, int length);
    void modif_map(MAP_T *MAP);
    char *get_where_can_go(MAP_T *MAP, int pos_x, int pos_y);
    void create_rndm_path_per(MAP_T *MAP, int width, int length);
    void display_char(char **tab);
    void generate(int length, int width, MAP_T *MAP, char **av);

#endif /* !__MY_H__ */
