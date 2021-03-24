/*
** EPITECH PROJECT, 2020
** B-PSU-200-RUN-2-1-mysokoban-khadafi.hadjee-issouf
** File description:
** my_puterr_null.c
*/

#include "my.h"

char *my_puterr_null(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(2, &str[i], 1);
    return NULL;
}