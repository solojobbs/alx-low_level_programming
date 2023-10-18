#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @sp: string to be printed between numbers
 * @n: number of integers 
 *
 * Return: does not return anything
 */
void print_numbers(const char *sp, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		if (!sp)
			printf("%d", va_arg(ls, int));
		else if (sp && i == 0)
			printf("%d", va_arg(ls, int));
		else
			printf("%s%d", sp, va_arg(ls, int));
	}

	va_end(ls);

	printf("\n");
}
