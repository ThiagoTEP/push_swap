/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:57:08 by thevaris          #+#    #+#             */
/*   Updated: 2025/08/23 14:57:09 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	while (temp)
	{
		*a = temp->next;
		free(temp);
		temp = *a;
	}
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	while (i--)
		free(split[i]);
	free(split);
}

void	free_stacks(t_stack **a, t_stack **b)
{
	free_list(a);
	free_list(b);
}
