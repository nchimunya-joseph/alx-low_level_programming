#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	for (; i < size; i++)
		m[i] = str[i];


	return (m);
}

/**
 * *new_dog 0 create a new dog
 * @name: string for name
 * @age: interger for age
 * @owner: string for owner
 * Return: a dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *mydog;
	mydog = malloc(sizeof(struct dog));

	if (mydog == NULL)
		return (NULL);

	mydog->name = _strdup(name);

	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}

	mydog->owner = _strdup(owner);

	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}

	mydog->age = age;

	return (mydog);
}
