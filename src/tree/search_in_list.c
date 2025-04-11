/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** search_in_list.c
*/

#include "tree.h"
#include "my_str.h"
#include <stdlib.h>

tree_t *search_in_list(char *room, tree_t **head)
{
    tree_t *tmp = NULL;

    if (head == NULL || (*head) == NULL || room == NULL)
        return NULL;
    tmp = (*head);
    while (tmp != NULL) {
        if (my_strcmp(tmp->name, room) == EPITECH_SUCCESS)
            return tmp;
        tmp = tmp->next;
    }
    return NULL;
}
