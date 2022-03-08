#ifndef DOG_h
#define DOG_h

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
*struct dog - information about a dog
*@name: pointer to a string
*@age: float
*@owner: pointer to a string
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
