/*
** EPITECH PROJECT, 2019
** psu_navy_2019
** File description:
** my.h
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <dirent.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <pwd.h>
#include <ncurses.h>
#include "time.h"
#include "my_list.h"
#ifndef MY_H
#define MY_H
#define null NULL

void my_putchar(char);
void my_putstr(char *);
void my_putint(int *tab);
void square_pos(int *tab, int i, int max[2]);
void print_col(char *buffer);
void my_convert_base(int nb, char *base);
void myfreetab(char **tab);
void display(char **map);

int my_put_nbr(int);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char *const s1, char const *s2, int n);
int my_strlen(char *s1);
int my_getnbr(char *str);
int my_puterror(char *);
int my_printf(char *str, ...);
int my_matchstick(char **av);
int verify_line(char *line, int line_max);
int isnotnum(char *str);
int verify_match(char **map, int line, char *match, int match_t);
int check_win(char **map);
int check_loose(char **map);
int verify_pip_tab(char **map);

char *my_strdup(char *);
char *my_evil_str(char *);
char *my_strcpy(char *, char const *);
char *my_puterr_null(char *str);
char *concat_params(char *s1, char *s2);

char **create_map(int line);
#endif