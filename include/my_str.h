/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** header file for amazed -> tree
*/

#ifndef MY_STR_H
    #define MY_STR_H
    #define EPITECH_ERROR 84
    #define EPITECH_SUCCESS 0
    #define EPITECH_RETURN 1
    #define ERR -1
    #define UNUSED(arg)((void)arg)
    #include <sys/types.h>

ssize_t my_strlen(char const *str);
int my_strcmp(char *str_1, char *str_2);
char *my_strdup(char *str);
void my_putchar(char c);
void my_putstr(char *str);

#endif /* MY_STR_H */
