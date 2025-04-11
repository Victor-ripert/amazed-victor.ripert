/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** a
*/

#include "lib.h"

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
