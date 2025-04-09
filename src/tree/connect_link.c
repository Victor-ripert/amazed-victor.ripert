/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** connect_link.c
*/

#include "tree.h"
#include <stdlib.h>

#include <stdio.h>

size_t connect_link(char *room1, char *room2, tree_t **head)
{
    tree_t *node1 = search_in_list(room1, head);
    tree_t *node2 = search_in_list(room2, head);

    if (node1 == NULL || node2 == NULL)
        return EPITECH_ERROR;
    if (child_append(node1, node2) == EPITECH_ERROR) {
        return EPITECH_ERROR;
    }
    if (child_append(node2, node1) == EPITECH_ERROR)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}
