/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** parse_line, the main function of the parse part
*/

#include "lib.h"
#include "parsing.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int parse_line(char const *line, size_t const count,
    size_t *robots, tree_t **head)
{
    node_type_t current_type = NONE;

    if (line[0] == '#')
        return parse_command(line, &current_type);
    if (count == 0)
        return parse_robots(line, robots);
    if (is_room_line(line))
        return parse_room(line, head, &current_type);
    if (is_tunnel_line(line))
        return parse_tunnel(line, head);
    write_error("Error: invalid line\n");
    return EPITECH_ERROR;
}
