/*
** EPITECH PROJECT, 2025
** a-maze-d
** File description:
** header file for amazed -> tree
*/

#ifndef TREE_H
    #define TREE_H
    #define EPITECH_ERROR 84
    #define EPITECH_SUCCESS 0
    #define EPITECH_RETURN 1
    #define ERR -1
    // #define UNUSED __attribute__((unused))
    #define UNUSED(arg)((void)arg)
    #include <sys/types.h>

typedef struct pos_s {
    size_t x;
    size_t y;
} pos_t;

typedef enum type_s {
    START = 0,
    END = 1,
    NONE = 3
} node_type_t;

typedef struct tree_s {
    char *name;
    pos_t position;
    struct tree_s **connected_room;
    struct tree_s *next;
    node_type_t node_type;
} tree_t;

ssize_t add_to_list(char *room_name, int pos_x, int pos_y, tree_t **head);
tree_t *search_in_list(char *room, tree_t **head);
ssize_t child_array_len(tree_t *node);
size_t child_append(tree_t *node1, tree_t *node2);
size_t connect_link(char *room1, char *room2, tree_t **head);
tree_t *search_node(tree_t **head, node_type_t node_type);

#endif /* TREE_H */
