#include "lists.h"
/**
 * delete_dnodeint_at_index- deletes at gibem index
 * @head: head of the list
 * @index:node to be deleted
 * Return: 1 on sucess, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;

	if (temp->prev == NULL && index == 0)
	{
		if (temp->next == NULL)
		{
			free(temp);
			return (1);
		}
		temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}
	if (temp->next == NULL && n == index)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}

