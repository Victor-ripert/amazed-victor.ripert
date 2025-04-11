/*
** EPITECH PROJECT, 2025
** a-laze-d
** File description:
** free_tree_arrray.c
*/

#include "tree.h"
#include <stdlib.h>

void free_tree_array(tree_t **array)
{
    for (size_t i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free(array);
}
