/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-khadafi.hadjee-issouf
** File description:
** matchstick
*/

#include "my.h"
#include "my_list.h"

void print_remove(game_t *game)
{
    write(1, "Played removed ", 15);
    my_put_nbr(game->match);
    write(1, " match(es) from line ", 21);
    my_put_nbr(game->line);
    my_putchar('\n');
}

int verify_pip_tab(char **map)
{
    int count = 0;

    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            if (map[i][j] == '|')
                count++;
        }
    }
    return count;
}

char **org(char **map, game_t *game)
{
    map = remove_pip(map, game);
    print_remove(game);
    display(map);
    return map;
}

int my_matchstick(char **av)
{
    int win = 0;
    char **map = create_map(my_getnbr(av[1]));
    game_t *game = malloc(sizeof(*game));

    while (win == 0) {
        write(1, "Your turn :\n", 12);
        if ((game = l_and_m(my_getnbr(av[1]), av[2], map, game)) == NULL)
            return 0;
        map = org(map, game);
        if ((win = check_win(map)) != 0)
            break;
        my_putchar('\n');
        map = art_int(game, my_getnbr(av[1]), my_getnbr(av[2]), map);
        if ((win = check_loose(map)) != 0)
            break;
        my_putchar('\n');
    }
    myfreetab(map);
    return win;
}