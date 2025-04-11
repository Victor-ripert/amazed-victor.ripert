/*
** EPITECH PROJECT, 2025
** minishell1
** File description:
** my_strdup
*/

#include "lib.h"
#include <stdlib.h>

char *my_strdup(char *str)
{
    char *str_dup = malloc(sizeof(char) * (my_strlen(str) + 1));

    str_dup = my_strcpy(str_dup, str);
    return str_dup;
}
