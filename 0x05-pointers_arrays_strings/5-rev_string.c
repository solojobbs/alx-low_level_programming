#include "main.h"

/**
 * rev_string - function that prints a string, in reverse,
 * followed by a new line.
 *
 * @str: entry
 *
 */

void rev_string(char *str)
{
	int i, len,l;
	char tmp

	for (len = 0; str[len] != '\0'; len++)
		;
	
	l = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];
		str[i] = str[l];
		str[l--] = tmp;
	}
}
