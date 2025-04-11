/*
** EPITECH PROJECT, 2025
** test
** File description:
** my_isdigit
*/

#include "lib.h"
#include <stddef.h>

int my_isdigit(char const c)
{
    if (c >= '0' && c <= '9')
        return EPITECH_SUCCESS;
    return EPITECH_ERROR;
}
