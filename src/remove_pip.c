/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-khadafi.hadjee-issouf
** File description:
** remove_pip
*/

#include "my.h"

static int my_strlen_pyp(char **map, int lin)
{
    int index = 0;

    for (index = my_strlen(map[lin]); map[lin][index] != '|'; index--);
    return (index);
}

char **remove_pip(char **map, game_t *game)
{
    int index = my_strlen_pyp(map, game->line);
    int count = 0;

    for (; count < game->match; count++) {
        map[game->line][index] = ' ';
        index--;
    }
    return map;
}