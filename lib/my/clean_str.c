/*
** EPITECH PROJECT, 2020
** Clean_str
** File description:
** clean_str.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

char *clean_str(char *str)
{
    int index = 0;
    int x = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(str)));

    for (; str[index] != '\0'; index++)
        if (str[index] == '\t')
            str[index] = ' ';
    for (index = 0; str[index] == ' '; index++);
    for (; str[index] != '\0'; index++) {
        for (; str[index] == ' ' && str[index + 1] == ' '; index++);
        dest[x] = str[index];
        x++;
    }
    dest[x - 1] = '\0';
    free(str);
    return dest;
}
