#include "variadic_functions.h"

/**
 * print_all - print everything
 *
 * @arglist: list of arguments
 *
 * Return: does not return anything
 */

void print_all(const char * const arglist, ...)
{
	int i = 0;
	char *str, *sp = "";

	va_list ls;

	va_start(ls, arglist);

	if (arglist != NULL)
	{
		while (arglist[i])
		{
			switch (arglist[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(ls, int));
                                        break;
				case 'f':
					printf("%s%f", sp, va_arg(ls, double));
                                        break;
				case 's':
					str = va_arg(ls, char *);
					
					if (str == NULL)
						str = "(nil)";

					printf("%s%s", sp, str);
                                        break;
				default:
					i++;
					continue;
			}

			sp = ", ";
			i++;
		}
	}

	printf("\n");

	va_end(ls);
}
