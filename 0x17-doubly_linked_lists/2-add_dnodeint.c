#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of linked list
 * @n: value of new node
 * Return: new node address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		new->prev = NULL;
		new->next = *head;
		new->n = n;
		*head = new;
	}
	else									
	{											
		*head = new;
		new->n = n;
		new->prev = NULL;											
		new->next = NULL;
	}
	return (*head);
}
