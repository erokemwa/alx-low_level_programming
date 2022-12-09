#include "lists.h"
/**
 * sum_dlistint- sums the data in linked lists
 * @head: head of the list
 * Return: sum of data,0 on failure
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
