/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:14:10 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/31 16:22:13 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cmp(void *a, void *b)
{
	return (*((int *)a) - *((int *)b));
}

int	ft_validate(t_stack *stack)
{
	t_stack *node_i;
	t_stack *node_j;

	node_i = stack;
	node_j = NULL;
	while (node_i && node_i->next != node_i)
	{
		node_j = node_i;
		while (node_j && node_j->next != node_i)
		{
			if (ft_cmp(node_j->content, node_j->next->content) == 0)
				return (0);
			node_j = node_j->next;
		}
	}
	return (1);
}