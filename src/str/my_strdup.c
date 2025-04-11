/*
** EPITECH PROJECT, 2025
** print_typed_value.c
** File description:
** display the value of void * in function of is type passed as argument
*/
#include <stdio.h>
#include <stdlib.h>
#include "my_str.h"

char *my_strdup(char *str)
{
    size_t str_len = my_strlen(str);
    char *result = NULL;

    if (str == NULL)
        return NULL;
    result = malloc(sizeof(char) * (str_len + 1));
    if (result == NULL)
        return NULL;
    for (size_t i = 0; i < str_len; i++) {
        result[i] = str[i];
    }
    result[str_len] = '\0';
    return result;
}
