/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:36:11 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 16:30:21 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

//	TODO: Implement solution
int	ft_solve(t_stack **stack_a, t_stack **stack_b, t_stack **instructions)
{
	if (!instructions)
		return (0);
	ft_putendl_fd("Init a and b", 1);
	ft_stack_print(*stack_a, ft_stack_printint);
	ft_stack_print(*stack_b, ft_stack_printint);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Exec sa", 1);
	ft_stack_swap(stack_a);
	ft_stack_print(*stack_a, ft_stack_printint);
	ft_stack_print(*stack_b, ft_stack_printint);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Exec pb pb pb", 1);
	ft_stack_push(stack_a, stack_b);
	ft_stack_push(stack_a, stack_b);
	ft_stack_push(stack_a, stack_b);
	ft_stack_print(*stack_a, ft_stack_printint);
	ft_stack_print(*stack_b, ft_stack_printint);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Exec ra rb (equiv. to rr)", 1);
	ft_stack_rotate(stack_a);
	ft_stack_rotate(stack_b);
	ft_stack_print(*stack_a, ft_stack_printint);
	ft_stack_print(*stack_b, ft_stack_printint);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Exec rra rrb (equiv. to rrr)", 1);
	ft_stack_rrotate(stack_a);
	ft_stack_rrotate(stack_b);
	ft_stack_print(*stack_a, ft_stack_printint);
	ft_stack_print(*stack_b, ft_stack_printint);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Exec sa", 1);
	ft_stack_swap(stack_a);
	ft_stack_print(*stack_a, ft_stack_printint);
	ft_stack_print(*stack_b, ft_stack_printint);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Exec pa pa pa", 1);
	ft_stack_push(stack_b, stack_a);
	ft_stack_push(stack_b, stack_a);
	ft_stack_push(stack_b, stack_a);
	ft_stack_print(*stack_a, ft_stack_printint);
	ft_stack_print(*stack_b, ft_stack_printint);
	ft_putchar_fd('\n', 1);

	return (0);
}
