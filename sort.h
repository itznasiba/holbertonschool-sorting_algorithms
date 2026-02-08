#ifndef SORT_H
#define SORT_H

#include <stddef.h>

void print_array(const int *array, size_t n);
void bubble_sort(int *array, size_t n);

typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

size_t print_list(const listint_t *h);

#endif /*SORT_H*/
