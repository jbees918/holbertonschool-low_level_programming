#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* include libraries */

#include <stdio.h>
#include <stdlib.h>

/*  structs */

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of node in list
 * @next: Pointer to next node
 * @express: Pointer to next node in exp lane
 *
 * Description: singly linked list node structure with express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;



/* functions declrations */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS */
