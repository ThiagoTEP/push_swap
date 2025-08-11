#include "push_swap.h"

void	op_two(t_stack **a)
{
	if ((*a)->number > (*a)->next->number)
		sa(a);
}

void	op_three(t_stack **a)
{
	int		max;

	(*a)->index = 0;
	max = op_max(a);
	if (max == (*a)->number)
		ra(a);
	if (max == (*a)->next->number)
		rra(a);
	if ((*a)->number > (*a)->next->number)
		sa(a);
}

void	op_four(t_stack **a, t_stack **b)
{
	int		min;
	int		i;
	int		stacksize;
	t_stack	*l_node;

	l_node = last_node(a);
	min = op_min(a);
	stacksize = lst_size(a);
	i = -1;
	while (++i < stacksize)
	{
		if (l_node->number == min)
			rra(a);
		if ((*a)->number != min)
			ra(a);
		else
		{
			pb(a, b);
			break ;
		}
	}
	op_three(a);
	pa(a, b);
}

void	op_five(t_stack **a, t_stack **b)
{
	int		min;
	int		i;
	int		stacksize;
	t_stack	*l_node;

	min = op_min(a);
	stacksize = lst_size(a);
	i = -1;
	l_node = last_node(a);
	while (++i < stacksize)
	{
		if (l_node->number == min)
			rra(a);
		if ((*a)->number != min)
			ra(a);
		else
		{
			pb(a, b);
			break ;
		}
	}
	op_four(a, b);
	pa(a, b);
}