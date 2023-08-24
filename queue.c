#include "monty.h"
/**
 * f_queue - Sets the queue mode (FIFO).
 * @head: Pointer to the head of the stack.
 * @counter: Line counter.
 *
 * Return: No return value.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a new node at the end of the stack (FIFO).
 * @head: Pointer to the head of the stack.
 * @n: Value of the new node.
 *
 * Return: No return value.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
