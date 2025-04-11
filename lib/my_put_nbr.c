/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** a
*/

#include "lib.h"
#include <unistd.h>

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -1 * nb;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return EPITECH_SUCCESS;
}
