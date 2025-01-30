/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_popback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:54:53 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 15:07:03 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stack_popback(t_stack **stack)
{
	t_stack	*last;

	if (!stack || !*stack)
		return (NULL);
	last = (*stack)->prev;
	if (last->next == last && last->prev == last)
		*stack = NULL;
	else
		ft_stack_detach(last);
	return (last);
}