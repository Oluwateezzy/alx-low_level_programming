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
	dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
	{
		return (NULL);
	}

	for (x = 0; name[x] != '\0'; x++)
		;
	new_name = malloc(sizeof(char) * (x + 1));
	if (new_name == NULL)
		return ('\0');
	for (i = 0; name[i] != '\0'; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';
	(*dog1).name = new_name;
	(*dog1).age = age;
	for (x = 0; owner[x] != '\0'; x++)
		;
	new_owner = malloc(sizeof(char) * (x + 1));
	if (new_owner == NULL)
		return ('\0');
	for (i = 0; owner[i] != '\0'; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';
	(*dog1).owner = new_owner;
	return (dog1);
}
