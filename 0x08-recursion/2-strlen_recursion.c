#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @a: the string of which lenghth to be found
 *
 * Return: the function returns the length of the string
 *
 */

int  _strlen_recursion(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}
	a++;
	return (_strlen_recursion(a) + 1);
}
