/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-khadafi.hadjee-issouf
** File description:
** base
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "my.h"

void my_convert_base(int nb, char *base)
{
    int i = 0;
    int rest = 0;

    while (base[i] != '\0')
        i = i + 1;
    rest = nb % i;
    nb = nb / i;
    if (nb != 0)
        my_convert_base(nb, base);
    write(1, &base[rest], 1);
    return;
}

void binaire(char *str, int index, va_list ap)
{
    if (str[index + 1] == 'b')
        my_convert_base(va_arg(ap, int), "01");
}

void octale(char *str, int index, va_list ap)
{
    if (str[index + 1] == 'o')
        my_convert_base(va_arg(ap, int), "01234567");
}

void hexa(char *str, int index, va_list list)
{
    if (str[index + 1] == 'x')
        my_convert_base(va_arg(list, int), "0123456789abcdef");
    if (str[index + 1] == 'X')
        my_convert_base(va_arg(list, int), "0123456789ABCDEF");
}

void convert_base(char *str, int index, va_list list)
{
    binaire(str, index, list);
    octale(str, index, list);
    hexa(str, index, list);
}