/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-khadafi.hadjee-issouf
** File description:
** my_strtowordarray
*/

#include "my.h"
#include "stdio.h"

static int nb_line(char **tab)
{
    int index = 0;
    int count = 0;

    for (; tab[index] != NULL; index++)
        count++;
    return count;
}

char **my_str_to_word_array(char **env)
{
    char **dest = malloc(sizeof(char *) * (nb_line(env) + 1));
    int index = 0;
    int j = 0;

    for (; env[index] != NULL; index++) {
        dest[index] = malloc(sizeof(char) * (my_strlen(env[index]) + 1));
        for (j = 0; env[index][j] != '\0'; j++)
            dest[index][j] = env[index][j];
        dest[index][j] = '\0';
    }
    dest[index] = NULL;
    return dest;
}