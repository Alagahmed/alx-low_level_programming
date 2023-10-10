#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @u: struct dog to free
 */

void free_dog(dog_t *u)
{
	if (u)
	{
		free(u->name);
		free(u->owner);
		free(u);
	}
}
