#include "dog.h"
#include <stdio.h>

/**
 * print_dog - variable initializer
 *
 * @d: pointer to dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %1f\nOwner: %s\n",
			d->age,
			d->owner != NULL ? d->owner : "(nil)");
}
