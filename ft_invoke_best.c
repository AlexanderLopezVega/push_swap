/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invoke_best.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:50:51 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/31 16:42:19 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_stack	*ft_invoke_best(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*best_op_stack;
	t_stack	*op_stack;
	t_stack	*node;
	size_t	min_count;
	size_t	count;

	if (!stack_a || !stack_b)
		return (NULL);
	node = stack_a;
	best_op_stack = ft_compute_ops(node, stack_a, stack_b);
	op_stack = NULL;
	min_count = ft_stack_count(op_stack, 0);
	count = 0;
	node = node->next;
	while (node != stack_a)
	{
		op_stack = ft_compute_ops(node, stack_a, stack_b);
		count = ft_stack_count(op_stack, 0);
		if (count < min_count)
		{
			ft_stack_clear(best_op_stack, free);
			min_count = count;
			best_op_stack = op_stack;
		}
		else
			ft_stack_clear(op_stack, free);
		node = node->next;
	}
	return (best_op_stack);
}