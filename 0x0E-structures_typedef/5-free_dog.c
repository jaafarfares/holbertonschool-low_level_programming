#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*free_dog -fonction
*@d: pointer to a structure
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
