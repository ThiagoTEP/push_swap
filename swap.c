#include "push_swap.h"

void	swap_node(t_stack **stack)
{
	t_stack	*tmp;
	int		n;

	n = (*stack)->next->number;
	tmp = *stack;
	tmp = tmp->next;
	tmp->number = (*stack)->number;
	(*stack)->number = n;
}

void	sa(t_stack **a)
{
	swap_node(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap_node(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **b, t_stack **a)
{
	swap_node(b);
	swap_node(a);
	write(1, "ss\n", 3);
}