#include "lists.h"
/**
*add_dnodeint_end - the function that adds a new node at the back
*@head: the head of the list
*@n: .....
*Return: .....
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (!new_nose)
new_node->n = n;
new_node->prev = *head;
new_node->next = NULL;

}
