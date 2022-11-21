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
	unsigned int i, x;
	char *new_name, *new_owner;
	dog_t *dog1;

	if (name == NULL || owner == NULL)
		return ('\0');
	for (x = 0; name[x] != '\0'; x++)
		;
	new_name = malloc(sizeof(char) * (x + 1));
	if (new_name == NULL)
	{
		free(new_name);
		return ('\0');
	}
	for (x = 0; owner[x] != '\0'; x++)
		;
	new_owner = malloc(sizeof(char) * (x + 1));
	if (new_owner == NULL)
	{
		free(new_owner);
		return ('\0');
	}
	dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
	{
		free(dog1);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		new_name[i] = name[i];
	(*dog1).name = new_name;
	(*dog1).age = age;
	for (i = 0; owner[i] != '\0'; i++)
		new_owner[i] = owner[i];
	(*dog1).owner = new_owner;
	return (dog1);
}
