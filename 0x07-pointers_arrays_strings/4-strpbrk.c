#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: function parameter
  *
  * @accept: Fuunction parameter
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int f, i;

	for (f = 0; s[f] != '\0'; f++)
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
	if (s[f] == accept[i])
	return (s + f);
	}
	}
	return (0);
}
