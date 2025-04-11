/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** parse_room, give the room information and add's room
*/

#include "lib.h"
#include "parsing.h"
#include <stddef.h>
#include <unistd.h>

int parse_room(char const *line, tree_t **head, node_type_t *type)
{
    char **parts = my_str_to_word_array((char *)line, ' ');
    int x = 0;
    int y = 0;

    if (!parts || !parts[0] || !parts[1] || !parts[2]) {
        write_error("Erreur : ligne de salle invalide\n");
        return EPITECH_ERROR;
    }
    x = my_strtod(parts[1]);
    y = my_strtod(parts[2]);
    if (add_to_list(parts[0], x, y, head) == EPITECH_ERROR)
        return EPITECH_ERROR;
    (*head)->node_type = *type;
    *type = NONE;
    return EPITECH_SUCCESS;
}
