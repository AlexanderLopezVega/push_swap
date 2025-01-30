/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:41:52 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 14:56:49 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_swap(t_stack **stack)
{
	t_stack	*node;

	if (!stack || !*stack)
		return ;
	node = *stack;
	node->prev->next = node->next;
	node->next->prev = node->prev;
	node->prev = node->next;
	node->next = node->prev->next;
	node->next->prev = node;
	node->prev->next = node;
	*stack = node->prev;
}