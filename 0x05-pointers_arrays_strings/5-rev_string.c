#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that prints a string, in reverse,
 * followed by a new line.
 *
 * @str: entry
 *
 */

void rev_string(char *str)
{
	int i, len;

	char *begin, *end = str;

	for (i = 0; str[i] != '\0' && str[i + 1] != '\0'; i++)
	{
		end++;
	}
	len = i + 1;
	begin = str;
	for (i = 0; i < len / 2; i++)
	{
		char x;
		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
