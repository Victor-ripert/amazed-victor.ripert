/*
** EPITECH PROJECT, 2025
** Amazed
** File description:
** amazed, the main function of the parse
*/

#include "parsing.h"
#include "lib.h"
#include "tree.h"

int amazed(int const argc, char const *const argv[], tree_t **head)
{
    if (checking_error_bin(argc, argv) == EPITECH_ERROR)
        return EPITECH_ERROR;
    if (parse_maze(head) == EPITECH_ERROR)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}
