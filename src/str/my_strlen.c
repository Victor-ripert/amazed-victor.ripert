/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** return length of a str
*/

#include "my_str.h"
#include <stddef.h>

ssize_t my_strlen(char const *str)
{
    int i = 0;
    int result = 0;

    if (str == NULL)
        return ERR;
    while (str[i] != '\0'){
        i++;
        result++;
    }
    return result;
}
