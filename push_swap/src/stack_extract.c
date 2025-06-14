/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_extract.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:11:16 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 18:17:52 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "push_swap.h"

t_stack	*stack_extract(t_stack **stack)
{
	t_stack	*node;

	if (!stack || !*stack)
		return (NULL);
	node = *stack;
	if (node->next == node || node->prev == node)
		*stack = NULL;
	else
	{
		node->next->prev = node->prev;
		node->prev->next = node->next;
		*stack = node->next;
		node->next = node;
		node->prev = node;
	}
	return (node);
}
