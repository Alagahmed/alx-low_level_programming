#include "main.h"

/**
  * _strchr - main function
  *
  * @s: Function parameter
  *
  * @c: Function parameter
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
	if (s[j] == c)
	return (s + j);
	}
	return (0);
}
