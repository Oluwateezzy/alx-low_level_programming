#include "dog.h"
/**
 * init_dog - initial dog struct
 * @d: struct dog pararmeter
 * @name: char parameter
 * @age: float parameter
 * @owner: char parameter
 * Return: void
 */
void init_dog(struct dog *d, char name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
