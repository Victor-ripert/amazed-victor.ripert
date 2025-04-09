/*
** EPITECH PROJECT, 2025
** word_array
** File description:
** array_append.c
*/

#include <stdlib.h>
#include "word_array.h"

int array_append(char ***array, char *elem)
{
    int array_size = find_array_len((*array));
    char **new_array = malloc(sizeof(char *) * (array_size + 2));

    for (int i = 0; (*array)[i] != NULL; i++) {
        new_array[i] = array_strdup((*array)[i]);
    }
    new_array[array_size] = array_strdup(elem);
    new_array[array_size + 1] = NULL;
    free_array((*array));
    (*array) = new_array;
    return EPITECH_SUCCESS;
}
