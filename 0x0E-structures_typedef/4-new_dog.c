#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - create new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog = malloc(sizeof(dog_t));

	if (new_Dog == NULL)
	{
		return (NULL);
	}

	new_Dog->name = strdup(name);
	if (new_Dog->name == NULL)
	{
		free(new_Dog);
		return (NULL);
	}

	new_Dog->owner = strdup(owner);
	if (new_Dog->owner == NULL)
	{
		free(new_Dog->name);
		free(new_Dog);
		return (NULL);
	}
	new_Dog->age = age;
	return (new_Dog);
}
