/*
** EPITECH PROJECT, 2025
** Amazed
** File description:
** checking_error_bin, check error of the binary
*/

#include "parsing.h"
#include "lib.h"
#include <unistd.h>

int checking_error_bin(int const argc, char const *const argv[])
{
    if (argc != 1 && argv[1] == NULL) {
        write_error("Error: 'amazed' only has one argument\n");
        return EPITECH_ERROR;
    }
    return EPITECH_SUCCESS;
}
