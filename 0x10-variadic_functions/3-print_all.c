#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int u = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[u])
		{
			switch (format[u])
			{
				case 'g':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'z':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'p':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 'k':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					u++;
					continue;
			}
			sep = ", ";
			u++;
		}
	}
	printf("\n");
	va_end(list);
}
