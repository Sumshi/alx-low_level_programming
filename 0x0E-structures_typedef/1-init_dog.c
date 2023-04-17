#include <stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 *@d: pointer to initialize
 *@name: dog name to initialize
 *@age: dog age to initialize
 *@owner: dog owner to initialize
 *Return : returns 0 on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)/*no need to return null since function is void*/
	{
		d->name = name;/*or  (*d).name = name*/
		d->age = age;/* (*d).age = age*/
		d->owner = owner;/*(*d).owner = owner*/
	}
}
