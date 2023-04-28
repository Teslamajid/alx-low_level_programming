#include "lists.h"
/**
 * free_listint - sets a linked list free
 * @head: listint_t to be freed list
 */
void free_listint(listint_t *head)
{
 listint_t *temp;
 while (head)
 {
 temp = head->next;
 free(head);
 head = temp;
 }
}

