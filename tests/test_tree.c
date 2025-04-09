/*
** EPITECH PROJECT, 2025
** test_my_funcgtion
** File description:
** desc
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "tree.h"
#include <stdio.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (tree, add_to_list_1, .init = redirect_all_std)
{
    tree_t *head = NULL;

    add_to_list("first", 0, 0, &head);
    cr_assert(my_strcmp(head->name, "first") == 0);
}

Test (tree, add_to_list_2, .init = redirect_all_std)
{
    tree_t *head = NULL;

    add_to_list("abc", 0, 0, &head);
    add_to_list("def", 0, 0, &head);
    cr_assert(my_strcmp(head->name, "def") == 0);
}

Test (tree, search_in_list_1, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    add_to_list("abc", 0, 0, &head);
    add_to_list("def", 0, 0, &head);
    add_to_list("ghi", 0, 0, &head);
    add_to_list("jkl", 0, 0, &head);
    add_to_list("mno", 0, 0, &head);
    result = search_in_list("def", &head);
    cr_assert(my_strcmp(result->name, "def") == 0);
}

Test (tree, search_in_list_2, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    add_to_list("abc", 0, 0, &head);
    add_to_list("def", 0, 0, &head);
    add_to_list("ghi", 0, 0, &head);
    add_to_list("jkl", 0, 0, &head);
    add_to_list("mno", 0, 0, &head);
    result = search_in_list("df", &head);
    cr_assert(result == NULL);
}

Test (tree, search_in_list_3, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    add_to_list("abc", 0, 0, &head);
    add_to_list("def", 0, 0, &head);
    add_to_list("ghi", 0, 0, &head);
    add_to_list("jkl", 0, 0, &head);
    add_to_list("mno", 0, 0, &head);
    result = search_in_list(NULL, &head);
    cr_assert(result == NULL);
}

Test (tree, search_in_list_4, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    result = search_in_list("def", &head);
    cr_assert(result == NULL);
}

Test (tree, search_in_list_5, .init = redirect_all_std)
{
    tree_t *result = NULL;

    result = search_in_list("def", NULL);
    cr_assert(result == NULL);
}

Test (tree, child_array_len_1, .init = redirect_all_std)
{
    tree_t *head = NULL;
    size_t array_size = 0;

    add_to_list("1", 0, 0, &head);
    add_to_list("2", 0, 0, &head);
    add_to_list("3", 0, 0, &head);
    connect_link("2", "3", &head);
    connect_link("2", "1", &head);
    array_size = child_array_len(head->next);
    cr_assert(array_size == 2);
}

Test (tree, child_array_len_2, .init = redirect_all_std)
{
    size_t array_size = 0;

    array_size = child_array_len(NULL);
    cr_assert(array_size == ERR);
}

Test (tree, child_array_len_3, .init = redirect_all_std)
{
    tree_t *head = NULL;
    size_t array_size = 0;

    add_to_list("1", 0, 0, &head);
    array_size = child_array_len(head);
    cr_assert(array_size == 0);
}

Test (tree, connnect_link_1, .init = redirect_all_std)
{
    tree_t *head = NULL;

    add_to_list("1", 0, 0, &head);
    add_to_list("2", 0, 0, &head);
    connect_link("1", "2", &head);
    cr_assert(head->connected_room[0] == head->next || head->next->connected_room[0] == head);
}

Test (tree, connnect_link_2, .init = redirect_all_std)
{
    tree_t *head = NULL;

    add_to_list("1", 0, 0, &head);
    connect_link("1", "1", &head);
    cr_assert(head->connected_room[0] == head);
}

Test (tree, connnect_link_3, .init = redirect_all_std)
{
    tree_t *head = NULL;
    size_t result = 0;

    add_to_list("1", 0, 0, &head);
    result = connect_link("none", "1", &head);
    cr_assert(result == EPITECH_ERROR);
}

Test (tree, child_append_1, .init = redirect_all_std)
{
    tree_t *head = NULL;
    size_t result = 0;

    add_to_list("1", 0, 0, &head);
    add_to_list("2", 0, 0, &head);
    result = child_append(head, head->next);
    cr_assert(result == EPITECH_SUCCESS);
}

Test (tree, child_append_2, .init = redirect_all_std)
{
    tree_t *head = NULL;
    size_t result = 0;

    add_to_list("1", 0, 0, &head);
    add_to_list("2", 0, 0, &head);
    result = child_append(head, head);
    cr_assert(result == EPITECH_SUCCESS);
}

Test (tree, child_append_3, .init = redirect_all_std)
{
    tree_t *head = NULL;
    size_t result = 0;

    add_to_list("1", 0, 0, &head);
    add_to_list("2", 0, 0, &head);
    result = child_append(head, NULL);
    cr_assert(result == EPITECH_ERROR);
}

Test (tree, child_append_4, .init = redirect_all_std)
{
    tree_t *head = NULL;
    ssize_t result = 0;

    add_to_list("1", 0, 0, &head);
    add_to_list("2", 0, 0, &head);
    child_append(head, head->next);
    result = child_array_len(head);
    cr_assert(result == 1);
}

Test (tree, child_append_5, .init = redirect_all_std)
{
    tree_t *head = NULL;
    ssize_t result = 0;

    add_to_list("1", 0, 0, &head);
    add_to_list("2", 0, 0, &head);
    add_to_list("3", 0, 0, &head);
    child_append(head, head->next);
    child_append(head, head->next->next);
    result = child_array_len(head);
    cr_assert(result == 2);
}

Test (tree, search_node_1, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    add_to_list("1", 0, 0, &head);
    head->node_type = START;
    add_to_list("2", 0, 0, &head);
    result = search_node(&head, START);
    cr_assert(result == head->next);
}

Test (tree, search_node_2, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    add_to_list("1", 0, 0, &head);
    head->node_type = END;
    result = search_node(&head, END);
    cr_assert(result == head);
}

Test (tree, search_node_3, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    add_to_list("1", 0, 0, &head);
    head->node_type = END;
    result = search_node(&head, NONE);
    cr_assert(result == NULL);
}

Test (tree, search_node_4, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    add_to_list("1", 0, 0, &head);
    head->node_type = START;
    result = search_node(NULL, START);
    cr_assert(result == NULL);
}

Test (tree, search_node_5, .init = redirect_all_std)
{
    tree_t *head = NULL;
    tree_t *result = NULL;

    add_to_list("1", 0, 0, &head);
    head->node_type = NONE;
    result = search_node(&head, START);
    cr_assert(result == NULL);
}