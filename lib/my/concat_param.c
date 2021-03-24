/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myls-khadafi.hadjee-issouf
** File description:
** concat_param
*/

#include "my.h"

char *concat_params(char *s1, char *s2)
{
    char *dest = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
    int x = 0;
    int i = 0;

    for (x = 0; s1[x] != '\0'; x++) {
        dest[i] = s1[x];
        i++;
    }
    for (x = 0; s2[x] != '\0'; x++) {
        dest[i] = s2[x];
        i++;
    }
    return dest;
}