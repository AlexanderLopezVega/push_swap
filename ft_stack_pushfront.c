/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pushfront.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:18:55 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 14:37:38 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_pushfront(t_stack **stack, t_stack *node)
{
	t_stack	*old;
	if (!stack || !node)
		return ;
	if (!*stack)
	{
		*stack = node;
		return ;
	}
	old = *stack;
	node->prev = old->prev;
	node->next = old;
	node->prev->next = node;
	node->next->prev = node;
	*stack = node;
}