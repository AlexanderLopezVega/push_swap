/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_popfront.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:04:27 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/31 16:03:33 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stack_popfront(t_stack **stack)
{
	t_stack	*first;

	if (!stack || !*stack)
		return (NULL);
	first = (*stack);
	if (first->next == first && first->prev == first)
		*stack = NULL;
	else
	{
		*stack = first->next;
		ft_stack_detach(first);
	}
	return (first);
}