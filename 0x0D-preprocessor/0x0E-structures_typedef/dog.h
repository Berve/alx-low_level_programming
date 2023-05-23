#ifndef DOG
#define DOG

/**
 * struct dog - Structure with variable dog
 * @name: a pointer to a character
 * @age: a floating point
 * @owner: a pointer to a chararcter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
