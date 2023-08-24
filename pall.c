#include "monty.h"

/**
 * f_pall - Prints all the elements in the stack or queue.
 * @head: Double pointer to the head of the stack or queue.
 * @counter: Line number where the pall operation is being executed.
 *
 * Return: none
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
