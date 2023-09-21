#include "main.h"

/**
  * _strcmp - The main function
  *
  * @s1: Function parameter
  *
  * @s2: Function parameter
  *
  * Return: s1, s2
  */
int _strcmp(char *s1, char *s2)
{
int f = 0;

while (s1[f] != '\0' && s2[f] != '\0')
{
	if (s1[f] != s2[f])
	{
	return (s1[f] - s2[f]);
	}
	f++;
	}
	return (0);
}
