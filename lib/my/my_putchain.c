/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myls-khadafi.hadjee-issouf
** File description:
** my_putchain
*/

#include "../../include/my.h"
#include "my.h"

void my_putchain(list_s *list)
{
    for (; list != null; list = list->next)
        my_putstr(list->dear);
}