#include "main.h"

int actual_sqrt_recursion(int y, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @y: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int y)
{
	if (y < 0)
		return (-1);
	return (actual_sqrt_recursion(y, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @y: number to calculate the sqaure root of
 * @x: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int y, int x)
{
	if (x * x > y)
		return (-1);
	if (x * x == y)
		return (x);
	return (actual_sqrt_recursion(y, x + 1));
}
