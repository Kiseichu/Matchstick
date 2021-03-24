/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-khadafi.hadjee-issouf
** File description:
** win
*/

#include "my.h"

int check_win(char **map)
{
    if (verify_pip_tab(map) == 0) {
        my_printf("%s", "You lost, too bad...\n");
        return 2;
    }
    return 0;
}

int check_loose(char **map)
{
    if (verify_pip_tab(map) == 0) {
        return 1;
    }
    return 0;
}
