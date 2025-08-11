#include "push_swap.h"

void	radix(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		maxbits;
	int		i;
	int		j;
	int		stacksize;

	set_index_number(a);
	maxbits = get_max_bits(a);
	i = -1;
	stacksize = lst_size(a);
	while (++i < maxbits)
	{
		j = 0;
		while (j++ < stacksize)
		{
			tmp = *a;
			if (((tmp->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (lst_size(b))
			pa(a, b);
	}
}

int	get_max_bits(t_stack **a)
{
	int	maxbits;
	int	max;

	maxbits = 0;
	max = op_max(a);
	while ((max >> maxbits) != 0)
		maxbits++;
	return (maxbits);
}