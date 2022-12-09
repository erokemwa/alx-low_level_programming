#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node
 * @head: head of the lists
 * @index: nth node
 * Return: nth node, NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	if (index == 0)
	{
		return (temp);
	}

	while (temp && n <= index - 1)
	{
		n++;
		temp = temp->next;
	}
	return (temp);
}
