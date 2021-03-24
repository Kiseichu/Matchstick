/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-khadafi.hadjee-issouf
** File description:
** my_printf
*/

#include <stddef.h>
#include <stdarg.h>
#include "my.h"

void my_basique(char *str, va_list list, int i)
{
    if (str[i + 1] == 'c')
        my_putchar((char) va_arg(list, int));
    if (str[i + 1] == 's')
        my_putstr(va_arg(list, char *));
    if (str[i + 1] == 'i' || str[i + 1] == 'd')
        my_put_nbr(va_arg(list, int));

}

int my_printf(char *str, ...)
{
    int i = 0;
    va_list list;

    va_start(list, str);
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] != '%')
            my_putchar(str[i]);
        else {
            my_basique(str, list, i);
            convert_base(str, i, list);
            i++;
        }
    va_end(list);
    return 0;
}