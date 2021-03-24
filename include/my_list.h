/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myls-khadafi.hadjee-issouf
** File description:
** my_list
*/

#ifndef MY_LIST_H_
#define MY_LIST_H_
#include "my.h"

typedef struct s_game {
    int line;
    int match;
}game_t;

game_t *l_and_m(int line, char *match_max, char **map, game_t *game);

char **remove_pip(char **map, game_t *game);
char **art_int(game_t *game, int line_m, int match_m, char **map);
#endif