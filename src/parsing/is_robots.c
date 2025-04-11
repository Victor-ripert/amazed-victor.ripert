/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** is_robots, check if the line is robots
*/

#include "lib.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int is_robots(char const *string, size_t const count)
{
    if (count != 0)
        return EPITECH_SUCCESS;
    for (size_t i = 0; string[i] != '\n'; i++) {
        if (my_isdigit(string[i]) == EPITECH_ERROR) {
            write_error("Error: the file doesn't contain any robot\n");
            return EPITECH_ERROR;
        }
    }
    return EPITECH_SUCCESS;
}
