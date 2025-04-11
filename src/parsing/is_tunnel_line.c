/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** is_tunnel_line, check if the line is a link between two rooms
*/

#include "tree.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int is_tunnel_line(char const *line)
{
    for (size_t i = 0; line[i]; i++) {
        if (line[i] == '-')
            return 1;
        if (line[i] == ' ')
            return EPITECH_SUCCESS;
    }
    return EPITECH_SUCCESS;
}
