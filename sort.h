#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* prototype of given functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*taks 0*/
void bubble_sort(int *array, size_t size);
/*taks 1*/
void insertion_sort_list(listint_t **list);
/*taks 2*/
void selection_sort(int *array, size_t size);
/*taks 3*/
void swap(int *a, int *b);
size_t partition(int *array, size_t start, size_t end, size_t size);
void sort(int *array, size_t start, size_t end, size_t size);
void quick_sort(int *array, size_t size);

#endif
