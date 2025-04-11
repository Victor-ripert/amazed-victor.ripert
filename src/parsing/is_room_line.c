/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** is_room_line, check if the line is a room
*/

#include "tree.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int is_room_line(char const *line)
{
    int space_count = 0;

    for (size_t i = 0; line[i]; i++) {
        if (line[i] == ' ')
            space_count++;
        if (line[i] == '-')
            return EPITECH_ERROR;
    }
    if (space_count == 2)
        return EPITECH_SUCCESS;
    return EPITECH_ERROR;
}
