/*
** EPITECH PROJECT, 2025
** a-amze-d
** File description:
** display_list.c
*/

#include "tree.h"
#include "my_str.h"
#include <stddef.h>
#include <stdio.h>

void display_child(tree_t *node)
{
    if (node == NULL || node->connected_room == NULL)
        return;
    for (size_t i = 0; node->connected_room[i] != NULL; i++) {
        my_putstr("└──");
        my_putstr(node->connected_room[i]->name);
        my_putstr("\n");
    }
}

void display_list(tree_t *head)
{
    tree_t *tmp = NULL;

    if (head == NULL)
        return;
    tmp = head;
    while (tmp != NULL) {
        my_putstr(tmp->name);
        my_putstr("\n");
        display_child(tmp);
        tmp = tmp->next;
    }
    return;
}
