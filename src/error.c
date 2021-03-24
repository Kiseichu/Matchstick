/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-khadafi.hadjee-issouf
** File description:
** error
*/

#include "my.h"

int isnotnum(char *str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        if ((str[index] < '0' || str[index] > '9'))
            return -1;
    }
    return 0;
}

int verify_line(char *line, int line_max)
{
    int line_n = my_getnbr(line);

    if (line_n > line_max)
        return -2;
    return 0;
}

int nb_match(int line, char **map)
{
    int nb_pip = 0;

    for (int index = 0; map[line][index] != '\0'; index++) {
        if (map[line][index] == '|')
            nb_pip++;
    }
    return nb_pip;
}

int verify_match(char **map, int line, char *match, int match_t)
{
    int match_nb = my_getnbr(match);
    int match_max = nb_match(line, map);

    if (match_nb > match_t)
        return -3;
    if (match_nb > match_max)
        return -4;
    return 0;
}
