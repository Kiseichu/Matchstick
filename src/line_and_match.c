/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-khadafi.hadjee-issouf
** File description:
** line_and_match
*/

#include "my.h"
#include "my_list.h"

char *reconvert(char *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str)));
    int i = 0;
    int j = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            i++;
        dest[j] = str[i];
        j++;
    }
    dest[j] = '\0';
    return dest;
}

int error_line(char *buffer, int line)
{
    if (isnotnum(buffer) == -1) {
        write(2, "Error: invalid input (positive number expected)\n", 48);
        return -1;
    }
    if (verify_line(buffer, line) == -2) {
        write(2, "Error: this line is out of range\n", 33);
        return -1;
    }
    return 0;
}

int error_match(char *buffer, int line, char *match_max, char **map)
{
    if (verify_match(map, line, buffer, my_getnbr(match_max)) == -3) {
        write(2, "Error: you cannot remove more than ", 35);
        my_puterror(match_max);
        write(2, " matches per turn\n", 18);
        return -1;
    }
    if (verify_match(map, line, buffer, my_getnbr(match_max)) == -4) {
        write(2, "Error: not enough matches on this line\n", 39);
        return -1;
    }
    if (isnotnum(buffer) == -1) {
        write(2, "Error: invalid input (positive number expected)\n", 48);
        return -1;
    }
    return 0;
}

game_t *l_and_m(int line, char *match_max, char **map, game_t *game)
{
    char *buffer = NULL;
    size_t n;

    write(1, "Line: ", 6);
    if (getline(&buffer, &n, stdin) < 0)
        return NULL;
    buffer = reconvert(buffer);
    if (error_line(buffer, line) != 0)
        return (l_and_m(line, match_max, map, game));
    game->line = my_getnbr(buffer);
    write(1, "Matches: ", 9);
    if (getline(&buffer, &n, stdin) < 0)
        return NULL;
    buffer = reconvert(buffer);
    if (error_match(buffer, game->line, match_max, map) != 0)
        return (l_and_m(line, match_max, map, game));
    game->match = my_getnbr(buffer);
    return game;
}