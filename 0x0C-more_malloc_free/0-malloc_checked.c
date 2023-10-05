#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory 
 *
 * @n: memory size
 *
 * Return: nothing
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
