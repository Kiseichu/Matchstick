/*
** EPITECH PROJECT, 2021
** B-CPE-200-RUN-2-1-matchstick-khadafi.hadjee-issouf
** File description:
** main
*/

#include "my.h"

int error_gestion(char *str1, char *str2)
{
    for (int index = 0; str1[index] != '\0'; index++) {
        if (str2[index] < '0' && str2[index] > '9')
            return 84;
    }
    for (int index = 0; str2[index] != '\0'; index++) {
        if (str2[index] < '0' && str2[index] > '9')
            return 84;
    }
    if (my_getnbr(str1) < 1 || my_getnbr(str1) > 100)
        return 84;
    return 0;
}

void print_help(void)
{
    my_printf("\t./matchstick number_maximal_of_line");
    my_putstr(" number_maximal_of_match_you_can_retire\n");
    my_putstr("For exemple:\n");
    my_putstr("\t./matchstick 5 5\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && (my_strcmp(av[1], "-h") == 0)) {
        print_help();
        return 0;
    }
    if (ac != 3)
        return (my_puterror("Invalid Arguments\n"));
    if (error_gestion(av[1], av[2]) == 84) {
        return
        (my_puterror("Invalid Argument\nFor help you use ./matchstick -h\n"));
    }
    return (my_matchstick(av));
}