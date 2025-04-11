/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** a
*/

#include "lib.h"
#include <stddef.h>

ssize_t my_strlen(char const *str)
{
    int i = 0;
    int result = 0;

    if (str == NULL)
        return EPITECH_ERROR;
    while (str[i] != '\0'){
        i++;
        result++;
    }
    return result;
}
