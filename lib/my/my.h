/*
** EPITECH PROJECT, 2019
** psu_navy_2019
** File description:
** my.h
*/

#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

#ifndef MY_H
#define MY_H

void my_putchar(char);
void my_putstr(char *);
void my_puterr(char *str);
int my_strlen(char *);
void convert_base(char *str, int index, va_list list);
int my_getnbr(char *);
int my_put_nbr(int);
int my_strcmp(char const *s1, char const *s2);
char *my_evil_str(char *str);
void my_puttab(char **tab);
int my_strncmp(char *const s1, char const *s2, int n);
#endif