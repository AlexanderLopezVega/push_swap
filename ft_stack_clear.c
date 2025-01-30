/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:23:52 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 15:59:26 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_clear(t_stack **stack, void (*del)(void *))
{
	t_stack *node;

	if (!stack || !del)
		return ;
	node = ft_stack_popback(stack);
	while (node)
	{
		ft_stack_del(node, del);
		node = ft_stack_popback(stack);
	}
}