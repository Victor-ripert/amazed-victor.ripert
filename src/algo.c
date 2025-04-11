/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** algo.c
*/

#include "tree.h"
#include <stddef.h>

#include <stdio.h>

ssize_t find_path(tree_t *start, tree_t ***tab)
{
    ssize_t result = 0;
    ssize_t recursive_result = 0;

    if (start == NULL || tab == NULL)
        return EPITECH_ERROR;
    if (start->node_type == END)
        return EPITECH_SUCCESS;
    result = tree_array_append(tab, start);
    if (result == EPITECH_ERROR)
        return EPITECH_ERROR;
    if (result == ERR)
        return ERR;
    for (size_t i = 0; start->connected_room[i] != NULL; i++) {
        recursive_result = find_path(start->connected_room[i], tab);
        if (recursive_result == EPITECH_SUCCESS)
            return EPITECH_SUCCESS;
        if (recursive_result == EPITECH_ERROR)
            return EPITECH_ERROR;
    }
    return ERR;
}

size_t algo(tree_t **head, tree_t ***tab)
{
    tree_t *start = NULL;
    ssize_t result = 0;

    if (head == NULL || (*head) == NULL || tab == NULL)
        return EPITECH_ERROR;
    start = search_node(head, START);
    result = find_path(start, tab);
    if (result == ERR)
        return EPITECH_ERROR;
    return result;
}
