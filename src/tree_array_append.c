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

static size_t child_create(tree_t ***connected_room, tree_t *node2,
    size_t array_size, tree_t **new_childs_array)
{
    if (connected_room == NULL || node2 == NULL || new_childs_array == NULL)
        return EPITECH_ERROR;
    new_childs_array[array_size] = node2;
    new_childs_array[array_size + 1] = NULL;
    (*connected_room) = new_childs_array;
    return EPITECH_SUCCESS;
}

static bool find_node_presence(tree_t **connected_room, tree_t *node2)
{
    for (size_t i = 0; connected_room[i] != NULL; i++) {
        if (connected_room[i] == node2)
            return true;
    }
    return false;
}

static size_t tablen(tree_t **tab)
{
    size_t i = 0;

    if (tab == NULL)
        return 0;
    for (i = 0; tab[i] != NULL; i++);
    return i;
}

ssize_t tree_array_append(tree_t ***connected_room, tree_t *node2)
{
    ssize_t array_size = tablen(*connected_room);
    tree_t **new_childs_array = NULL;

    if (connected_room == NULL || node2 == NULL)
        return EPITECH_ERROR;
    new_childs_array = malloc(sizeof(tree_t) * (array_size + 2));
    if (new_childs_array == NULL)
        return EPITECH_ERROR;
    if (array_size == 0)
        return child_create(connected_room, node2, array_size,
            new_childs_array);
    if (find_node_presence((*connected_room), node2) == true)
        return ERR;
    for (size_t i = 0; (*connected_room)[i] != NULL; i++)
        new_childs_array[i] = (*connected_room)[i];
    new_childs_array[array_size] = node2;
    new_childs_array[array_size + 1] = NULL;
    free((*connected_room));
    (*connected_room) = new_childs_array;
    return EPITECH_SUCCESS;
}
