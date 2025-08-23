/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:56:29 by thevaris          #+#    #+#             */
/*   Updated: 2025/08/23 15:00:33 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_node_down(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*node;
	t_stack	*new_lastnode;

	tmp = *stack;
	new_lastnode = *stack;
	while (new_lastnode->next->next)
		new_lastnode = new_lastnode->next;
	node = last_node(stack);
	*stack = node;
	node->next = tmp;
	new_lastnode->next = NULL;
}

void	rra(t_stack **a)
{
	rotate_node_down(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rotate_node_down(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rotate_node_down(a);
	rotate_node_down(b);
	write(1, "rrr\n", 4);
}
