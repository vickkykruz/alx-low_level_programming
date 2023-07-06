#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - This is a function that prints a listint_t linked
 * list.
 * @head: This is an argument that reprsent the head of the list struct
 *
 * Return: This function return the number of node.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, num;
	const listint_t *tmp = NULL;
	const listint_t *ptr = NULL;

	tmp = head;
	while (tmp)
	{
		/* Print the addres of each node with their data */
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		i++; /* increment each node */
		tmp = tmp->next;

		/* Print the list of each loop */
		num = 0;
		ptr = head;
		while (num < i)
		{
			/* if the tmp address is equall the head address */
			if (tmp == ptr)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (i);
			}
			ptr = ptr->next;
			num++;
		}
		if (head == NULL)
			exit(98);
	}
	return (i);
}
