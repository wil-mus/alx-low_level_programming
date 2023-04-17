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
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
