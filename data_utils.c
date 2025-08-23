/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:57:12 by thevaris          #+#    #+#             */
/*   Updated: 2025/08/23 15:09:35 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
