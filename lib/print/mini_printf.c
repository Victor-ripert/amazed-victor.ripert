/*
** EPITECH PROJECT, 2025
** minishell1
** File description:
** mini_printf
*/

#include "../../include/lib.h"
#include <stdarg.h>

int display_args(char chara, va_list args)
{
    switch (chara) {
    case 'd':
    case 'i':
        my_put_nbr(va_arg(args, int));
        break;
    case 's':
        my_putstr(va_arg(args, char *));
        break;
    case 'c':
        my_putchar(va_arg(args, int));
        break;
    case '%':
        my_putchar('%');
        break;
    default:
        my_putchar('%');
        my_putchar(chara);
    }
}

int mini_printf(const char *format, ...)
{
    va_list args;
    char chara;

    va_start(args, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            chara = format[i + 1];
            display_args(chara, args);
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(args);
    return EPITECH_SUCCESS;
}
