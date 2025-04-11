/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** parse_robots, take the number of robot
*/

#include "lib.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int parse_robots(char const *line, size_t *robots)
{
    for (size_t i = 0; line[i] != '\n'; i++) {
        if (my_isdigit(line[i]) == EPITECH_ERROR) {
            write_error("Erreur : nombre de robots invalide\n");
            return EPITECH_ERROR;
        }
    }
    *robots = my_strtod(line);
    return EPITECH_SUCCESS;
}
