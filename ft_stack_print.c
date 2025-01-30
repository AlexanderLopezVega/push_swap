/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:35:05 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 16:13:29 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_print(t_stack *stack, void (*print)(void *))
{
	t_stack	*iter;
	
	if (!stack)
	{
		ft_putendl_fd("(null)", 1);
		return ;
	}
	print(stack->content);
	iter = stack;
	iter = iter->next;
	while (iter && iter != stack)
	{
		ft_putstr_fd(", ", 1);
		print(iter->content);
		iter = iter->next;
	}
	ft_putchar_fd('\n', 1);
}