#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int f, p;

	f = 0;
	p = 0;
	while (dest[f] != '\0')
	{
	f++;
	}
	while (p < n && src[p] != '\0')
	{
	dest[f] = src[p];
	f++;
	p++;
	}
	dest[f] = '\0';
	return (dest);
}
