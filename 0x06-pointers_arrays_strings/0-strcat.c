#include "main.h"
/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int f, p;

	f = 0;
	p = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	while (src[p] != '\0')
	{
		dest[f] = src[p];
		f++;
		p++;
	}
	dest[f] = '\0';
	return (dest);
}
