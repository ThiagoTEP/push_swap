#include "push_swap.h"

int	organize_data(char **av, char **split, t_stack **a)
{
	int		i;
	t_stack	*tmp;

	if (split)
	{
		*a = create_new_node(ft_atol(split[0]));
		tmp = *a;
		i = 0;
		while (split[++i])
			lst_add_end(&tmp, create_new_node(ft_atol(split[i])));
		free_split(split);
	}
	else
	{
		*a = create_new_node(ft_atol(av[1]));
		tmp = *a;
		i = 1;
		while (av[++i])
			lst_add_end(&tmp, create_new_node(ft_atol(av[i])));
	}
	return (1);
}

int	check_organized(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->next)
			if (tmp->number >= tmp->next->number)
				return (0);
		tmp = tmp->next;
	}
	return (1);
}