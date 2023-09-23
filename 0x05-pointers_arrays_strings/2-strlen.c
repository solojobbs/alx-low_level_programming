#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @c: the entry
 *
 * Return: the length of the string
 */

int _strlen(char *c)
{
	int i;
	
	for (i = 0; c[i] != '\0'; i++)
		;
	return i;
}
