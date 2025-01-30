/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_detach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:55:40 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 14:57:50 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_detach(t_stack *node)
{
	if (!node)
		return ;
	node->prev->next = node->next;
	node->next->prev = node->prev;
	node->prev = node;
	node->next = node;
}