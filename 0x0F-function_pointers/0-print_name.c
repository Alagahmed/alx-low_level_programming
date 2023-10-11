#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @h: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*h)(char *))
{
	if (name == NULL || h == NULL)
		return;

	h(name);
}
