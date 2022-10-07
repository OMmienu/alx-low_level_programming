#include "main.h"
#include <stdlib.h>

/**
 * mallloc_checked - allowance memory using malloc
 * @b: memory to allowance
 *
 * Return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(insigned int b)
{

	void *p;

	p )-- = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
