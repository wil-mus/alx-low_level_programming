#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure of a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - initialize a variable of type dog
 * @g: pointer to struct dog
 * @name: dog name 
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *g, char *name, float age, char *owner)
{
	if (g != NULL)
	{
		g->name = name;
		g->age = age;
		g->owner = owner;
	}
}

#endif
