#include "push_swap.h"

void	sort_list(t_stack **stack)
{
	t_stack	*tmp;
	long	ltmp;
	int		i;

	tmp = *stack;
	ltmp = 0;
	i = 0;
	while (tmp && tmp->next)
	{
		if (tmp->number > tmp->next->number)
		{
			ltmp = tmp->number;
			tmp->number = tmp->next->number;
			tmp->next->number = ltmp;
			tmp = *stack;
		}
		else
			tmp = tmp->next;
	}
	tmp = *stack;
	while (tmp)
	{
		tmp->index = i++;
		tmp = tmp->next;
	}
}

void	set_index_number(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*new_stack;

	new_stack = NULL;
	tmp = *stack;
	while (tmp)
	{
		lst_add_end(&new_stack, create_new_node(tmp->number));
		tmp = tmp->next;
	}
	sort_list(&new_stack);
	tmp = *stack;
	put_index_stack(&tmp, &new_stack);
	free_list(&new_stack);
}

void	put_index_stack(t_stack **stack, t_stack **new_stack)
{
	t_stack	*tmp;
	t_stack	*new_tmp;

	tmp = *stack;
	new_tmp = *new_stack;
	while (tmp)
	{
		while (new_tmp)
		{
			if (new_tmp->number == tmp->number)
			{
				tmp->index = new_tmp->index;
				new_tmp = *new_stack;
				break ;
			}
			new_tmp = new_tmp->next;
		}
		tmp = tmp->next;
	}
}

int	op_min(t_stack **stack)
{
	t_stack	*tmp;
	int		min;

	tmp = *stack;
	min = tmp->number;
	while (tmp && tmp->next)
	{
		if (min > tmp->next->number)
			min = tmp->next->number;
		tmp = tmp->next;
	}
	return (min);
}

int	op_max(t_stack **stack)
{
	t_stack	*tmp;
	int		max;

	tmp = *stack;
	if (tmp->index)
	{
		max = 0;
		while (tmp)
		{
			if (max < tmp->index)
				max = tmp->index;
			tmp = tmp->next;
		}
	}
	else
	{
		max = 0;
		while (tmp)
		{
			if (max < tmp->number)
				max = tmp->number;
			tmp = tmp->next;
		}
	}
	return (max);
}