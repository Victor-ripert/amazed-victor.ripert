/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** child_append.c
*/

#include "tree.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

size_t free_tree_array(tree_t **array)
{
    if (array == NULL)
        return EPITECH_ERROR;
    for (size_t i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free(array);
    return EPITECH_SUCCESS;
}