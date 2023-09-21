#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int f, p;

	for (f = 0; f < n--; f++)
	{
	p = a[f];
	a[f] = a[n];
	a[n] = p;
	}
}
