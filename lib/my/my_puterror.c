/*
** EPITECH PROJECT, 2020
** B-CPE-101-RUN-1-1-evalexpr-emilie.baunifais
** File description:
** my_puterror
*/

#include "../../include/my.h"
#include <unistd.h>

int my_puterror(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
    return 84;
}
