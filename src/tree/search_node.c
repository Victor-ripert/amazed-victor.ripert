/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** search_node.c
*/

#include "tree.h"
#include <stddef.h>


tree_t *search_node(tree_t **head, node_type_t node_type)
{
    tree_t *tmp = NULL;

    if (head == NULL || (*head) == NULL || node_type == NONE)
        return NULL;
    tmp = (*head);
    while (tmp != NULL) {
        if (tmp->node_type == node_type)
            return tmp;
        tmp = tmp->next;
    }
    return NULL;
}
