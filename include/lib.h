/*
** EPITECH PROJECT, 2025
** test
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_
    #define EPITECH_ERROR 84
    #define EPITECH_SUCCESS 0
    #define BUFFER_SIZE 1024
    #include <sys/types.h>

void my_putchar(char c);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
ssize_t my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int mini_printf(const char *format, ...);
char **my_str_to_word_array(char *str, char c);
void free_array(char **array);
char *my_strdup(char *str);
void write_error(char const *string);
int my_isdigit(char const c);
int my_strtod(char const *string);

typedef struct int_values_s {
    int m;
    int lenght;
} int_values_t;

#endif /* !LIB_H_ */
