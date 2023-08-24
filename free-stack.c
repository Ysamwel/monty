#include "monty.h"
/**
 * free_stack - Frees all nodes in a stack.
 * @head: Pointer to the head of the stack.
 *
 * Return: No return value.
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
