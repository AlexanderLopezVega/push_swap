/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pushback.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:37:54 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 14:40:21 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_pushback(t_stack **stack, t_stack *node)
{
	if (!stack || !node)
		return ;
	ft_stack_pushfront(stack, node);
	*stack = (*stack)->next;
}