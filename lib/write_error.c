/*
** EPITECH PROJECT, 2025
** minishell2
** File description:
** write_error
*/

#include "lib.h"
#include <unistd.h>

void write_error(char const *string)
{
    write(2, string, my_strlen(string));
}
