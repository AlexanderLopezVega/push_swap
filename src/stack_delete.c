/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:09:56 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 17:52:03 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_delete(t_stack *stack, void (*const free)(void *content))
{
	while (stack)
		stack_delete_one(stack_extract(&stack), free);
}
