#ifndef SEARCHALGOS_H
#define SEARCHALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(const int *array, size_t size);
int advanced_binary(int *array, size_t size, int value);
int adv_bin_search(int *array, int start, size_t end, int value);
int find_lowest(int *array, int pos);
int find_highest(int *array, int pos, int size);
#endif
