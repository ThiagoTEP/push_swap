/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:57:05 by thevaris          #+#    #+#             */
/*   Updated: 2025/08/23 15:09:10 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_new_node(long number)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->number = number;
	node->next = NULL;
	return (node);
}

t_stack	*last_node(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if (!tmp->next)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

void	lst_add_end(t_stack **list, t_stack *node)
{
	t_stack	*tmp;

	if (!node)
		return ;
	if (!*list)
	{
		*list = node;
		return ;
	}
	tmp = last_node(list);
	tmp->next = node;
}

long	lst_size(t_stack **lst)
{
	t_stack	*tmp;
	long	size;

	tmp = *lst;
	size = 0;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
