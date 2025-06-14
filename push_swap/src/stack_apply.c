/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_apply.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:19:27 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 18:22:48 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_apply(const t_stack *stack,
		void (*const function)(void *content))
{
	t_stack	*node;

	if (!stack || !function)
		return ;
	function(stack->content);
	node = stack->next;
	while (node != stack)
	{
		function(node->content);
		node = node->next;
	}
}
