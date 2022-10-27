#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog.
* @d: intializing pointer to struct dog
* @name: dog name to initialize.
* @age: dog age to initialize.
* @owner: dog owner to intialize.
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/**Determines if d empty**/
	if (d == NULL)
		/**If d empty, allocate memory for struct dog**/
		d = malloc(sizeof(struct dog));

	/**Assigning value stored at pointer d**/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
