#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - info concerning a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner of a dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef struct dog dog_t;
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
