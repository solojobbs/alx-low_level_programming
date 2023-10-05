#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory 
 *
 * @n: memory size
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int n)
{
	void *p;

	p = malloc(n);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
