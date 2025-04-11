/*
** EPITECH PROJECT, 2024
** B-CPE-200-PAR-2-1-amazed-alfred.peyriere
** File description:
** algo.c
*/

#include <stdbool.h>
#include <stddef.h>
#include "tree.h"

tree_t **get_room_name(tree_t *room, tree_t ***tab)
{
    size_t count = 0;
    size_t len = child_array_len(room);
    ssize_t result = 0;
    // tree_t **tab = NULL;

    result = tree_array_append(tab, room);
    if (result == 84 || result == -1)
        return NULL;
    if (!(*tab))
        return NULL;
    if (room->connected_room == NULL) {
        printf("%s : Pas de rooms\n", room->name);
        return;
    }
    for (size_t i = 0; room->connected_room[i] != NULL; i++) {
        (*tab)[i] = room->connected_room[i];
        printf("the room : %s is connected to the room : %s\n", room->name, (*tab)[i]->name);
    }
    return (*tab);
}

char *find_room(tree_t *tree)
{
    tree_t *tmp = search_node(tree->connected_room, START);
    tree_t **tab = NULL;

    while (tmp != NULL) {
        tab = get_room_name(tmp, &tab);
        for (size_t i = 0; tab[i] != NULL; i++) {
            get_room_name(tab[i], &tab);
        }
        tmp = tmp->next;
    }
    return 0;
}

// bool is_connected(tree_t *room)
// {
// if ()
// }

int find_path(tree_t *new_graph)
{
    find_room(new_graph);
}
