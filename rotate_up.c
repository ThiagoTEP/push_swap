#include "push_swap.h"

void	rotate_node_up(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*node;

	tmp = *stack;
	node = last_node(stack);
	*stack = (*stack)->next;
	tmp->next = NULL;
	node->next = tmp;
}

void	ra(t_stack **a)
{
	rotate_node_up(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate_node_up(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_node_up(a);
	rotate_node_up(b);
	write(1, "rr\n", 3);
}