/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:56:45 by thevaris          #+#    #+#             */
/*   Updated: 2025/08/23 15:03:33 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_digits(char **av)
{
	int	i;
	int	j;

	i = -1;
	while (av[++i])
	{
		if (!av[i][0])
			return (0);
		j = -1;
		if (av[i][0] == '-' || av[i][0] == '+')
			j++;
		while (av[i][++j])
			if (!ft_isdigit(av[i][j]))
				return (0);
		if (j > 11)
			return (ft_printf(ERROR_MAX_MIN, RED, ERROR, DEFAULT_COLOR), 0);
	}
	return (1);
}

int	string_to_int(int ac, char **av, char **split, t_stack **a)
{
	if (ac == 2)
	{
		if (!check_digits(split))
			return (free_split(split), 0);
		organize_data(av, split, a);
	}
	return (1);
}

int	check_duplicates(t_stack **a)
{
	t_stack	*head;
	t_stack	*next_node;

	head = *a;
	next_node = head;
	while (head)
	{
		next_node = head->next;
		while (next_node)
		{
			if (next_node->number == head->number)
				return (0);
			next_node = next_node->next;
		}
		head = head->next;
	}
	return (1);
}

int	check_max_min(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->number > INT_MAX || tmp->number < INT_MIN)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
