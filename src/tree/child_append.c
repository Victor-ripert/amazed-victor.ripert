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

static size_t child_create(tree_t *node1, tree_t *node2,
    size_t array_size, tree_t **new_childs_array)
{
    new_childs_array[array_size] = node2;
    new_childs_array[array_size + 1] = NULL;
    node1->connected_room = new_childs_array;
    return EPITECH_SUCCESS;
}

static bool find_node_presence(tree_t *node1, tree_t *node2)
{
    for (size_t i = 0; node1->connected_room[i] != NULL; i++) {
        if (node1->connected_room[i] == node2)
            return true;
    }
    return false;
}

size_t child_append(tree_t *node1, tree_t *node2)
{
    ssize_t array_size = child_array_len(node1);
    tree_t **new_childs_array = NULL;

    if (node1 == NULL || node2 == NULL)
        return EPITECH_ERROR;
    new_childs_array = malloc(sizeof(tree_t) * (array_size + 2));
    if (new_childs_array == NULL)
        return EPITECH_ERROR;
    if (array_size == 0)
        return child_create(node1, node2, array_size, new_childs_array);
    if (find_node_presence(node1, node2) == true)
        return EPITECH_SUCCESS;
    for (size_t i = 0; node1->connected_room[i] != NULL; i++) {
        new_childs_array[i] = node1->connected_room[i];
    }
    new_childs_array[array_size] = node2;
    new_childs_array[array_size + 1] = NULL;
    free(node1->connected_room);
    node1->connected_room = new_childs_array;
    return EPITECH_SUCCESS;
}
