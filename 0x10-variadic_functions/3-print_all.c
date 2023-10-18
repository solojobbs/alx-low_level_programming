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
	char *s, *sp = "";

	va_list ls;

	va_start(ls, arglist);

	if (arglist != NULL)
	{
		while (arglist[i])
		{
			switch (arglist[i])
			{
				case "c":
					printf("%s%c", sp, va_arg(ls, int));
					break;
				case "i":
					printf("%s%d", sp, va_arg(ls, int));
                                        break;
				case "f":
					printf("%s%f", sp, va_arg(ls, double));
                                        break;
				case "s":
					s = va_arg(ls, char *);
					
					if (!s)
						s = "(nil)";

					printf("%s%s", sp, va_arg(ls, s));
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
