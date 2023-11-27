#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - str lenth
 * @s: string
 * Return: lnght str
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * *_strcpy - copies str
 * @dest: the buffer pointer
 * @src: copied str
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int ln = 0, a;

	while (src[ln] != '\0')
	{
		ln++;
	}
	a = 0;
	while (a < ln)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog - created new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: value to be return
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ln1, ln2;

	ln1 = _strlen(name);
	ln2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ln1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ln2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->owner, owner);
	dog->age = age;
	_strcpy(dog->name, name);
	return (dog);
}
