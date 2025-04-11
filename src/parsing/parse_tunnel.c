/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** parse_tunnel, give the links and links rooms together
*/

#include "tree.h"
#include "lib.h"
#include <stddef.h>
#include <unistd.h>

int parse_tunnel(char const *line, tree_t **head)
{
    char **parts = my_str_to_word_array((char *)line, '-');

    if (!parts || !parts[0] || !parts[1]) {
        write_error("Erreur : ligne de tunnel invalide\n");
        return EPITECH_ERROR;
    }
    if (connect_link(parts[0], parts[1], head) == EPITECH_ERROR) {
        free_array(parts);
        return EPITECH_ERROR;
    }
    free_array(parts);
    return EPITECH_SUCCESS;
}
