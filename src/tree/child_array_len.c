/*
** EPITECH PROJECT, 2025
** A-MAZE-D
** File description:
** child_array_len.c
*/

#include "tree.h"
#include <stddef.h>

ssize_t child_array_len(tree_t *node)
{
    size_t count = 0;

    if (node == NULL)
        return ERR;
    if (node->connected_room == NULL)
        return 0;
    for (size_t i = 0; node->connected_room[i] != NULL; i++)
        count++;
    return count;
}
