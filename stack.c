#include "monty.h"
/**
 * free_stack - that free a doubly link list
 * @head: head pointer to the double linked list
 * Return: nothing after freeing the stack
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * f_stack - that prints the top element in the stack
 * @head: head of stack
 * @counter: line counter
 * Return: nothing
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
