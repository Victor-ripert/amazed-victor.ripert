/*
** EPITECH PROJECT, 2025
** my_put_nbr
** File description:
** desc
*/
#include <stdio.h>
#include "tree.h"

int my_strcmp(char *str_1, char *str_2)
{   
    if (str_1 == NULL || str_2 == NULL)
        return ERR;
    if (my_strlen(str_1) != my_strlen(str_2)) {
        return ERR;
    }
    for (int i = 0; str_1[i] != '\0' && str_2[i] != '\0'; i++) {
        if (str_1[i] != str_2[i]) {
            return str_1[i] - str_2[i];
        }
    }
    return 0;
}
