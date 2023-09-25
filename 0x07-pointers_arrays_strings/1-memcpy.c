#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source parameter
  *
  * @dest: Destination parameter
  *
  * @n: Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
		while (j < n)
		{
			dest[j] = src[j];
			j++;
		}
	return (dest);
}
