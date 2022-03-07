#ifndef DOG_h
#define DOG_h
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

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;


#endif
