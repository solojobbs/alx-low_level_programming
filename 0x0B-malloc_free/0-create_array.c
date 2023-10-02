#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @s: The size of the array
 * @c: The character to fill in the array
 *
 * Return: The array filled
 */

char *create_array(unsigned int s, char c)
{
	unsigned int i;
	char *p;

	if (s == 0)
	{
		return(NULL);
	}

	p = malloc(s * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		p[i] = c;
	}

	return (p);
}
