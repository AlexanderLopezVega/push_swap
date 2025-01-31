/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:36:11 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/31 16:28:38 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>

void	ft_solve(t_stack **stack_a, t_stack **stack_b)
{
	size_t	count;

	ft_stack_push(stack_a, stack_b);	
	ft_putendl_fd("pb", 1);
	ft_stack_push(stack_a, stack_b);
	ft_putendl_fd("pb", 1);
	count = ft_stack_count(*stack_a, 3 + 1);
	while (count > 3)
	{
		ft_invoke_best(*stack_a, *stack_b);
		count = ft_stack_count(*stack_a, 3 + 1);
	}
	if (!ft_stack_issorted(*stack_a))
	{
		ft_stack_swap(stack_a);
		ft_putendl_fd("sa", 1);
	}
	ft_merge(stack_a, stack_b);
}
