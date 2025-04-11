/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** main.c -> seulement pour tree
*/

#include "tree.h"
#include <stdlib.h>

int main(void)
{
    tree_t *head = NULL;

    add_to_list("1", 0, 0, &head);
    head->node_type = START;
    add_to_list("2", 0, 0, &head);
    add_to_list("3", 0, 0, &head);
    head->node_type = END;
    add_to_list("4", 0, 0, &head);
    add_to_list("5", 0, 0, &head);
    add_to_list("6", 0, 0, &head);
    add_to_list("7", 0, 0, &head);
    add_to_list("9", 0, 0, &head);
    connect_link("1", "4", &head);
    connect_link("4", "5", &head);
    connect_link("5", "9", &head);
    connect_link("9", "2", &head);
    connect_link("2", "7", &head);
    connect_link("7", "6", &head);
    connect_link("6", "3", &head);
    find_path(head);
    return EPITECH_SUCCESS;
}
