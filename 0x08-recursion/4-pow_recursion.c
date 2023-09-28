#include "main.h"

/**
 * _pow_recursion - returns the value of h raised to the power of p
 * @h: value to raise
 * @p: power
 *
 * Return: result of the power
 */

int _pow_recursion(int h, int p)
{
	if (p < 0)
		return (-1);
	if (p == 0)
		return (1);
	return (h * _pow_recursion(h, p - 1));
}
