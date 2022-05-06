#include "lists.h"
/**
*dlistint_len - ....
*@h: ...
*Return: ....
*/
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
