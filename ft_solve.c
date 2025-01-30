/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:36:11 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 13:04:21 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	TODO: Implement solvings
t_stack	*ft_solve(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*stack_instructions;
	char	*str;

	(void)stack_a;
	(void)stack_b;
	stack_instructions = ft_stack_new();
	if (stack_instructions)
	{
		str = ft_strdup("This is working!");
		ft_stack_push(stack_instructions, str);
		str = ft_strdup("Hell yeah");
		ft_stack_push(stack_instructions, str);
	}
	return (stack_instructions);
}
