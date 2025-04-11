/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** my_putstr.c
*/

#include "my_str.h"
#include <stddef.h>
#include <sys/types.h>

void my_putstr(char *str)
{
    if (str == NULL)
        return;
    for (size_t i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
