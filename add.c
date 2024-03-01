#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @stack: pointer to the head of the stack
 * @line_number: line number in the Monty bytecode file
 * Return: no return
 */
void f_add(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;
	int stack_size = 0, sum;

	current_node = *stack;
	while (current_node)
	{
		current_node = current_node->next;
		stack_size++;
	}

	if (stack_size < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	current_node = *stack;
	sum = current_node->n + current_node->next->n;
	current_node->next->n = sum;
	*stack = current_node->next;
	free(current_node);
}

/**
 * addnode - add node to the head stack
 * @head: pointer to the head of the stack
 * @new_value: new value to be added
 * Return: no return
 */
void addnode(stack_t **head, int new_value)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");

	}
	if (temp)
		temp->prev = new_node;

	new_node->n = new_value;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
