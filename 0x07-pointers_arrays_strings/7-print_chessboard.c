#include "main.h"

/**
  * print_chessboard - main function
  *
  * @a: function parameter declared
  *
  * Return: Always 0.
  */
void print_chessboard(char (*a)[8])
{
	int p;
	int i;

	p = 0;
	while (p < 8)
	{
		for (i = 0; i < 8; i++)
		_putchar(a[p][i]);
		_putchar('\n');
		p++;
	}
}
