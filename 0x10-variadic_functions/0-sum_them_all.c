#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @w: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If w == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int w, ...)
{
	va_list ap;
	unsigned int u, sum = 0;

	va_start(ap, n);
	for (u = 0; u < w; u++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
