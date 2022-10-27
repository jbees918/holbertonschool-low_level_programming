#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog entry.
* @name: dogs name.
* @age: dogs age.
* @owner: dogs owner.
*
* Return: pointer to the new dog entry.
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	/* struct name dog_t and value being struct *dog */
	dog_t *dog;
	/* len1, len2 int values for string length of name & owner*/
	int len1, len2; /*
	*  measures strings for name & owner and assigns
	   value accordingly to len1 and len2
*/	len1 = _strlen(name);
	len2 = _strlen(owner); /*
	*  allocates memory for dog_t which is struct dog
*/	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL); /*
	*  derefrencing struct member name and allocating memory
	*  size of char type * len1 plus null byte
*/	dog->name = malloc((sizeof(char)) * (len1 + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	} /*
	*  dereferencing struct member ownere and allocating memory
	*  size of char * len2 plus null
*/	dog->owner = malloc((sizeof(char)) * (len2 + 1)); /*
	*  if owner empty, return null
*/
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	} /*
	*  copies strings for name & owner into struct members
	*  assign this as value using ->
*/	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
/**
* _strcpy - copies string at @src, including null byte,
* to  point determined by @dest.
* @dest: where to copy string.
* @src: string to copy
* Return: pointer to destinatin string.
**/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
/**
* _strlen - returns length of a string.
* @str: string to be evaluated.
* Return: the length of the string.
*/
int _strlen(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
