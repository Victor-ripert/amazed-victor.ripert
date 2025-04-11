/*
** EPITECH PROJECT, 2025
** minishell2
** File description:
** realloc
*/

#include "lib.h"
#include <stdlib.h>

char **my_realloc(char **pointer, size_t old_size, size_t new_size)
{
    char **temp = malloc(sizeof(char *) * new_size);
    size_t i = 0;

    if (!temp) {
        write_error("Error: Reallocation failed\n");
        return NULL;
    }
    if (old_size == new_size)
        return NULL;
    for (; i < old_size; i++)
        temp[i] = my_strdup(pointer[i]);
    temp[i] = NULL;
    free_array(pointer);
    return temp;
}
