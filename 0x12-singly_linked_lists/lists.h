#ifndef SINGLY_LINKED_LISTS
#define SINGLY_LINKED_LISTS

#include <stddef.h>
/*Define the struct format here */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * 
 * Description: singly linked list node structure
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototypes */
size_t print_list(const list_t *h);
#endif
