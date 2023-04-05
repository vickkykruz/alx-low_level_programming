#include "lists.h"
/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: A given pointer
 *
 * Return: A pointer
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = NULL;
	listint_t *fast = NULL;

	slow = fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;

		if (slow == fast)
		{
			listint_t *current = head;

			while (current != slow)
			{
				current = current->next;
				slow = slow->next;
			}

			return (current);
		}
	}

	return (NULL);
}
