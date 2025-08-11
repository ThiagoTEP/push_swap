#include "push_swap.h"

int	ps_parser(int ac, char **av, t_stack **a)
{
	char	**split;

	split = NULL;
	if (ac < 2)
		return (free_list(a), 0);
	if (ac == 2)
	{
		split = ft_split(av[1], ' ');
		if (!ps_parser_ac2(ac, split))
			return (free_split(split), 0);
	}
	else
		if (!check_digits(av + 1))
			return (ft_printf(ERROR_ISDIGIT, RED, ERROR, DEFAULT_COLOR), 0);
	if (!organize_data(av, split, a))
		return (free_list(a), 0);
	if (!check_duplicates(a))
		return (free_list(a), ft_printf(ERROR_DUP, RED, ERROR, DEFAULT_COLOR),
			0);
	if (!check_max_min(a))
		return (free_list(a), ft_printf(ERROR_MAX_MIN, RED, ERROR,
				DEFAULT_COLOR), 0);
	if (!check_organized(a))
		return (free_list(a), 0);
	return (1);
}

int	ps_parser_ac2(int ac, char **split)
{
	if (ac == 2)
	{
		if (!check_digits(split))
			return (0);
	}
	return (1);
}

void	numbers_count(t_stack **a, t_stack **b)
{
	int	lstsize;

	lstsize = lst_size(a);
	if (lstsize == 2)
		op_two(a);
	else if (lstsize == 3)
		op_three(a);
	else if (lstsize == 4)
		op_four(a, b);
	else if (lstsize == 5)
		op_five(a, b);
	else if (lstsize > 6)
		radix(a, b);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	(void)b;
	if (!ps_parser(ac, av, &a))
		return (free_stacks(&a, &b), 0);
	numbers_count(&a, &b);
	free_stacks(&a, &b);
	return (0);
}