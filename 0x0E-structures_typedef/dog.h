#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dogs
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
