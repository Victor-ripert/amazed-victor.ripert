/*
** EPITECH PROJECT, 2025
** minishell1
** File description:
** my_str_to_word_array
*/

#include "lib.h"
#include <stdlib.h>

int give_len(char *str, int *index, char c)
{
    int count = 0;

    for (int i = *index; str[i] != '\0'; i++) {
        count++;
        *index = *index + 1;
        if (str[i] == c) {
            return count;
        }
    }
    count++;
    return count;
}

int give_column(char *str, char c)
{
    int count = 0;

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == c)
            count++;
    }
    count++;
    return count;
}

void copy_word(char *tab, char *str, int_values_t *val, char c)
{
    for (int l = 0; l < val->lenght; l++) {
        if (str[val->m] == c || str[val->m] == '\0')
            tab[l] = '\0';
        else
            tab[l] = str[val->m];
        (val->m)++;
    }
}

char **my_str_to_word_array(char *str, char c)
{
    char **tab = NULL;
    int len = my_strlen(str);
    int column = give_column(str, c);
    int index = 0;
    int_values_t val = {0};

    tab = malloc(sizeof(char *) * (column + 1));
    if (!tab) {
        free_array(tab);
        return NULL;
    }
    for (int i = 0; i != column; i++) {
        val.lenght = give_len(str, &index, c);
        tab[i] = malloc(sizeof(char) * val.lenght + 1);
        copy_word(tab[i], str, &val, c);
        tab[i][val.lenght - 1] = '\0';
    }
    tab[column] = NULL;
    return tab;
}
