#include <stdio.h>
#include "dog.h"
#include<stdlib.h>
/**
 * free_dog -  frees memory allocated for dogs
 *@d: pointer to dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
