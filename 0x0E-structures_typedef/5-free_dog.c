#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - writes nudscfdsmbers
 * @d: pointer
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
