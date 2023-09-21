#include "main.h"

/**
  * _strncpy - The main function of the code
  *
  * @src: Function parameter
  *
  * @dest: Function parameter
  *
  * @n: Function parameter
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int f = 0;

	while (f < n && src[f] != '\0')
	{
	dest[f] = src[f];
	f++;
	}
	while  (f < n)
	{
	dest[f] = '\0';
	f++;
	}
	return (dest);
	}
