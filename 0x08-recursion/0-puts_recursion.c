#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *
 * @x: the string to be printed
 *
 * the function does no return
 */

void _puts_recursion(char *x)
{
	if (*x == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*x);
	x++;
	_puts_recursion(x);
}
