#include "lists.h"
/**
 * find_listint_loop - This is a function that finds the loop in a linked list
 * @head: This is an argument that reprsent the Head of the syrct list
 *
 * Return: This function return the address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_ptr, *slow_ptr;

	/** Passed the head adresss to the two pointers **/
	fast_ptr = head;
	slow_ptr = head;

	if (head == NULL)
		return (NULL);


	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			/** Condition is the address is not equalto head */
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (fast_ptr);
		}
	}
	return (NULL);
}
