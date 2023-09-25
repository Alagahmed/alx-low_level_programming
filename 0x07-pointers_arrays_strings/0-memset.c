#include "main.h"

/**
 * _memset - main function of the prototype
 *
 * @b: The value used to fill the memory
 *
 * @s: Function paramater
 *
 * @n: Function parameter
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
	a++;
	}
	return (s);
}
