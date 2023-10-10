#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @o: struct dog to print
 */

void print_dog(struct dog *o)
{
	if (o == NULL)
		return;

	if (o->name == NULL)
		o->name = "(nil)";
	if (o->owner == NULL)
		o->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", o->name, o->age, o->owner);
}
