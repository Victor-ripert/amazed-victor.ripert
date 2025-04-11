/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** main.c -> seulement pour tree
*/

#include "tree.h"
#include <stdlib.h>

#include <stdio.h>

int main(void)
{
    tree_t *head = NULL;
    size_t result = 0;
    tree_t **tab = NULL;

    add_to_list("1", 0, 0, &head);
    head->node_type = START;
    add_to_list("2", 0, 0, &head);
    add_to_list("3", 0, 0, &head);
    add_to_list("4", 0, 0, &head);
    add_to_list("5", 0, 0, &head);
    add_to_list("6", 0, 0, &head);
    add_to_list("7", 0, 0, &head);
    add_to_list("9", 0, 0, &head);
    head->node_type = END;
    connect_link("1", "5", &head);
    connect_link("1", "2", &head);
    connect_link("2", "3", &head);
    connect_link("3", "9", &head);
    connect_link("5", "6", &head);
    connect_link("6", "1", &head);
    display_list(head);
    result = algo(&head, &tab);
    if (result == EPITECH_SUCCESS)
        my_putstr("END FOUUUUUND ------\n");
    return EPITECH_SUCCESS;
}
