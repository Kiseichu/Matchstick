/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-khadafi.hadjee-issouf
** File description:
** *
*/

#include "my.h"
#include "my_list.h"

int number_of_pip(char **map, int line)
{
    int index = 0;
    int count = 0;

    for (; map[line][index] != '\0'; index++) {
        if (map[line][index] == '|')
            count++;
    }
    return count;
}

int rand_of_ligne(char **map, int line_max)
{
    int number_pyp_line = 0;
    int line = (rand() % line_max) + 1;

    number_pyp_line = number_of_pip(map, line);
    if (number_pyp_line == 0)
        line = rand_of_ligne(map, line_max);
    return line;
}

int rand_of_matches(int match_max, int line, char **map)
{
    int count = number_of_pip(map, line);
    int matche = (rand() % match_max) + 1;

    if (matche > count)
        matche = (rand() % count) + 1;
    return matche;
}
char **art_int(game_t *game, int line_m, int match_m, char **map)
{
    game->line = rand_of_ligne(map, line_m);
    game->match = rand_of_matches(match_m, game->line, map);
    my_putstr("AI's turn...\n");
    my_putstr("AI removed ");
    my_put_nbr(game->match);
    my_putstr(" match(es) from line ");
    my_put_nbr(game->match);
    my_putchar('\n');
    map = remove_pip(map, game);
    display(map);
    if (check_loose(map) == 0)
        my_putchar('\n');
    else
        my_putstr("I lost... snif... but I'll get you next time!!\n");
    return map;
}