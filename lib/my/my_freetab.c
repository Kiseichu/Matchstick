/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-khadafi.hadjee-issouf
** File description:
** my_freetab
*/

#include "my.h"

void myfreetab(char **tab)
{
    for (int index = 0; tab[index] != NULL; index++)
        free(tab[index]);
    free(tab);
}
