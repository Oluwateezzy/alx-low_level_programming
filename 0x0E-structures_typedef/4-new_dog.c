#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: char parameter
 * @age: float parameter
 * @owner: char parameter
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1 = malloc(sizeof(dog_t));

	(*dog1).name = name;
	(*dog1).age = age;
	(*dog1).owner = owner;
	return (dog1);
}
