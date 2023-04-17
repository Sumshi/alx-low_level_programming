#include <stdio.h>
#include "dog.h"
#include<stdlib.h>
#include<string.h>
/**
 *new_dog - pointer to new dog
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 * Return: a pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;/*pointer to the new dog*/
	char *name_copy;/*holds copy of the name*/
	char *owner_copy;/*holds copy of the owner*/

	new_dog = malloc(sizeof(dog_t));/*allocates space for new dog*/
	if (new_dog == NULL)
	{
		return (NULL);
	}

	/*allocating memory for name and owner string*/
	name_copy = malloc(strlen(name) + 1);/*+1 for null bit*/
	if (name_copy == NULL)
	{
		/*free(new_dog);frees memory previously allocated for dog_t*/
		return (NULL);
	}
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		/*free(name_copy);frees memory previously allocated for name_copy*/
		return (NULL);
	}
	/* Copy the name and owner strings into the new memory */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);
	/* Initialize the dog struct */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
