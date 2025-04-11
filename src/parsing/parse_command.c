/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** parse_command, to put the type of the room
*/

#include "lib.h"
#include "parsing.h"
#include <stddef.h>
#include <unistd.h>

int parse_command(char const *line, node_type_t *type)
{
    if (my_strcmp(line, "##start\n") == 0) {
        *type = START;
        return EPITECH_SUCCESS;
    }
    if (my_strcmp(line, "##end\n") == 0) {
        *type = END;
        return EPITECH_SUCCESS;
    }
    *type = NONE;
    return EPITECH_SUCCESS;
}
