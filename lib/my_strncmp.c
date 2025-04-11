/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** a
*/

#include "lib.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (n > i)
        dest[i] = '\0';
    return dest;
}
