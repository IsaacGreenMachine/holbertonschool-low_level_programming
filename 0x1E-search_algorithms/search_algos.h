#ifndef SEARCHALGOS_H
#define SEARCHALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *inside_search(skiplist_t *point, int value);
int list_len(skiplist_t *list);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(const int *array, size_t size);
int advanced_binary(int *array, size_t size, int value);
int adv_bin_search(int *array, int start, size_t end, int value);
int find_lowest(int *array, int pos);
int find_highest(int *array, int pos, int size);
#endif
