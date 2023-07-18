#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: an alone dog struct in a big world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, const char *src);
int _strlen(const char *s);

#endif

