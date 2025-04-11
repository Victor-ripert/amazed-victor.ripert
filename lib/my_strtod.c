/*
** EPITECH PROJECT, 2025
** test
** File description:
** my_strtod
*/

#include <stddef.h>

size_t my_strtod(char const *string)
{
    size_t result = 0.0;
    char c = 0;

    while (*string) {
        c = *string;
        if (c >= '0' && c <= '9')
            result = result * 10.0 + (c - '0');
        string++;
    }
    return result;
}
