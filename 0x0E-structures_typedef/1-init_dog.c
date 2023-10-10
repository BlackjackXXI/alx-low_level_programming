#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @a: the address f the dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: void
 */
 
 
void init_dog(struct dog *a, char *name, float age, char *owner)
{
	if (a == NULL)
		return;
	(*a).name = name;
	(*a).age = age;
	(*a).owner = owner;
}
