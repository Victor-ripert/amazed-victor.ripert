/*
** EPITECH PROJECT, 2024
** my_strcmp
** File description:
** a
*/

#include "lib.h"

int my_strcmp(char const *s1, char const *s2)
{
    int count = 0;
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    if (len1 != len2)
        return EPITECH_ERROR;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            count++;
    }
    if (count != 0)
        return EPITECH_ERROR;
    return EPITECH_SUCCESS;
}
