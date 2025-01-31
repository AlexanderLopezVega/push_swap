/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:54:07 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/31 14:49:46 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_stack_count(const t_stack *stack, const size_t max)
{
	t_stack	*node;
	size_t	count;

	if (!stack)
		return (0);
	if (stack->next == stack)
		return (1);
	node = stack->next;
	count = 1;
	while (node && node != stack)
	{
		if (max > 0 && count < max)
			return (count);
		++count;
		node = node->next;
	}
	return (count);
}