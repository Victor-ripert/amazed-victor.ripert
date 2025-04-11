/*
** EPITECH PROJECT, 2025
** test
** File description:
** parsing
*/

#ifndef PARSING_H
    #define PARSING_H
    #include "tree.h"

int amazed(int const argc, char const *const argv[], tree_t **head);
int checking_error_bin(int const argc, char const *const argv[]);
int parse_maze(tree_t **head);
int parse_line(char const *line, size_t const count,
    size_t *robots, tree_t **head);
int parse_command(char const *line, node_type_t *type);
int parse_robots(char const *line, size_t *robots);
int is_room_line(char const *line);
int parse_room(char const *line, tree_t **head, node_type_t *type);
int is_tunnel_line(char const *line);
int parse_tunnel(char const *line, tree_t **head);

#endif /* !PARSING_H */
