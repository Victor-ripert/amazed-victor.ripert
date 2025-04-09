/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** add_to_list.c
*/

#include "tree.h"
#include <stdlib.h>

ssize_t add_to_list(char *room_name, int pos_x, int pos_y, tree_t **head)
{
    tree_t *new_node = NULL;
    pos_t position = {pos_x, pos_y};

    new_node = malloc(sizeof(tree_t));
    if (new_node == NULL)
        return EPITECH_ERROR;
    new_node->position = position;
    new_node->connected_room = NULL;
    new_node->name = my_strdup(room_name);
    new_node->node_type = NONE;
    new_node->next = NULL;
    if ((*head) == NULL) {
        (*head) = new_node;
        return EPITECH_SUCCESS;
    }
    new_node->next = (*head);
    (*head) = new_node;
    return EPITECH_SUCCESS;
}
