#include "main.h"
/**
 * _print_rev_recursion - function that prints string in a reverse
 *
 * @s: the string to be printed in reverse
 *
 * the function does not return anything
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{	
		return;
	}
	s++;	
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
