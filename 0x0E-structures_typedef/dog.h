#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This is a struct that define the elements
 * @name: This is an element the use to describe name
 * @age: This is an element containting the given age
 * @owner: This an element containting the given owner
 *
 * Deacription: This struct is used to store and display the output
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/** Prototypes **/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
