#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - writes nudscfdsmbers
 * @str: pointer
 * Return: char
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;
	s = malloc(i + 1);
	if (s == NULL)
		{
		free(s);
		return (NULL);
		}
	for (j = 0; j < i + 1; j++)
	{
		s[j] = str[j];
	}
	return (s);
}

/**
 * *new_dog - writes nudscfdsmbers
 * @name: name
 * @age: age
 * @owner: *owner
 * Return: none
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perro;

	if (name == NULL)
		return (NULL);
	if (age < 0)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	perro = malloc(sizeof(dog_t));
	if (perro == NULL)
	{
		free(perro);
		return (NULL);
	}
	perro->name = name;
	perro->age = age;
	perro->owner = owner;
	return (perro);
}
