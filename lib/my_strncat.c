/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** a
*/

#include "lib.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    my_strncpy(dest + my_strlen(dest), src, nb);
    return dest;
}
