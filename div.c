#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @stack: pointer to the head of the stack
 * @line_number: line number in the Monty bytecode file
 * Return: no return
*/
void f_div(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;
	int stack_size = 0, quotient;

	current_node = *stack;
	while (current_node)
	{
		current_node = current_node->next;
		stack_size++;
	}

	if (stack_size < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	current_node = *stack;

	if (current_node->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	quotient = current_node->next->n / current_node->n;
	current_node->next->n = quotient;
	*stack = current_node->next;
	free(current_node);
}
