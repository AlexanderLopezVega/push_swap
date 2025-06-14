/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_append.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:58:48 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 17:35:37 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_append(t_stack **stack, t_stack *node)
{
	t_stack	*first;

	if (!stack || !node)
		return ;
	if (!*stack)
	{
		*stack = node;
		return ;
	}
	first = *stack;
	node->next = first;
	node->prev = first->prev;
	first->prev->next = node;
	first->prev = node;
}
