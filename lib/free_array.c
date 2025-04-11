/*
** EPITECH PROJECT, 2025
** minishell1
** File description:
** free_array
*/


#include "lib.h"
#include <stddef.h>
#include <stdlib.h>

void free_array(char **array)
{
    for (size_t i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free(array);
}
