#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @idx: index
 * @n: node
 * @h: list head
 * Return:the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	temp = *h;
	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp;
	temp->prev->next = new;
	new->prev = temp->prev;
	temp->prev = new;
	return (new);
}
