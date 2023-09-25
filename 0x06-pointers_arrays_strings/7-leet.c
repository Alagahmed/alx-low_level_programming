#include "main.h"
#include <stdio.h>
/**
  *leet - main function
  *
  * @n: Function parameter
  *
  *Return: value of n
 */

char *leet(char *n)
{
	int f, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (f = 0; n[f] != '\0'; f++)
	{
	for (p = 0; p < 10; p++)
	{
	if (n[f] == s1[p])
	{
	n[f] = s2[p];
	}
	}
	}
	return (n);
}
