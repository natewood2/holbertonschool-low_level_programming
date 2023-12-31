#include "lists.h"

/**
 * add_nodeint - adding node to the front
 * @head: head of the node
 * @n: where data will be stored
 * Return: the new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
