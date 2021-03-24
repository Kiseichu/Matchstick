/*
** EPITECH PROJECT, 2020
** B-CPE-101-RUN-1-1-infinadd-khadafi.hadjee-issouf
** File description:
** my_strdup
*/

#include "my.h"

static char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

char *my_strdup(char *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    dest = my_strcpy(dest, src);
    return dest;
}