#include "monty.h"

/**
 * free_stack - frees a stack
 * @head: pointer to the head of the stack
 * Return: no return
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
