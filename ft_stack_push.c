/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:35:59 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 13:03:23 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_push(t_stack *stack, void *content)
{
	t_list	*node;

	if (!stack || !content)
		return (0);
	node = ft_lstnew(content);
	if (!node)
		return (0);
	ft_lstadd_back(&stack->lst, node);
	return (1);
}
