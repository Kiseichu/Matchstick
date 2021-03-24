/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-khadafi.hadjee-issouf
** File description:
** map
*/

#include "my.h"

void display(char **map)
{
    for (int index = 0; map[index] != NULL; index++)
        my_printf("%s\n", map[index]);
}

char **map_malloc(int line)
{
    char **map = NULL;
    int colone = 0;
    int index = 0;

    colone = line * 2 + 1;
    line += 2;
    map = malloc(sizeof(char *) * (line + 1));
    for (index = 0; index < line; index++)
        map[index] = malloc(sizeof(char) * (colone + 1));
    map[index] = NULL;
    return map;
}

char **first_last_left_star(char **map, int line)
{
    int colon = line * 2 + 1;
    int index2 = 0;

    for (int index = 0; index < line + 2; index++) {
        if (index == 0 || index + 1 == line + 2) {
            for (index2 = 0; index2 < colon; index2++)
                map[index][index2] = '*';
            map[index][index2] = '\0';
        } else {
            map[index][0] = '*';
            index2 = 1;
            for (; index2 != colon; index2++)
                map[index][index2] = ' ';
            map[index][index2 - 1] = '*';
        }
    }
    return map;
}

char **create_pip(char **map, int line)
{
    int colone = line * 2 + 1;
    int index = 1;
    int index2 = colone / 2;
    int i = 0;
    int j = 0;

    for (index = 0; index != line + 1; index++) {
        for (i = 0; i != j; i++) {
            map[index][index2 + i] = '|';
            map[index][index2 - i] = '|';
        }
        j++;
    }
    return map;
}

char **create_map(int line)
{
    char **map = map_malloc(line);

    map = first_last_left_star(map, line);
    map = create_pip(map, line);
    display(map);
    my_putchar('\n');
    return map;
}