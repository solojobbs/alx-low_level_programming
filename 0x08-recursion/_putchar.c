#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1.
 * On error, -1 is return
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
