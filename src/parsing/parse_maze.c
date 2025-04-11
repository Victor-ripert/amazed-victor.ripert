/*
** EPITECH PROJECT, 2025
** Amazed
** File description:
** parse_maze, call the function that parse the line
*/

#include "lib.h"
#include "parsing.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int parse_maze(tree_t **head)
{
    char *line = NULL;
    size_t size = 0;
    size_t count = 0;
    size_t robots = 0;

    while (getline(&line, &size, stdin) != -1) {
        if (line[0] == '\n' || line[0] == '\0')
            break;
        if (parse_line(line, count, &robots, head) == EPITECH_ERROR) {
            free(line);
            return EPITECH_ERROR;
        }
        count++;
    }
    free(line);
    return EPITECH_SUCCESS;
}
