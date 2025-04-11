/*
** EPITECH PROJECT, 2025
** test_amazed
** File description:
** is_comment, check if the line is comment
*/

#include "tree.h"

int is_comment(char const *string)
{
    if (string[0] == '#')
        return EPITECH_SUCCESS;
    return ERR;
}
