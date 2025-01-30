/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:09:44 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 13:03:15 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

static void	ft_print(void *ptr)
{
	ft_putendl_fd((char *)ptr, STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_instructions;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		result;

	result = 1;
	stack_instructions = NULL;
	stack_a = ft_parse(argc, argv);
	stack_b = ft_stack_new();
	if (stack_a && stack_b)
	{
		stack_instructions = ft_solve(stack_a, stack_b);
		if (stack_instructions)
		{
			ft_stack_iter(stack_instructions, ft_print);
			result = 0;
		}
	}
	ft_stack_del(&stack_instructions, ft_sfree);
	ft_stack_del(&stack_a, ft_sfree);
	ft_stack_del(&stack_b, ft_sfree);
	if (result)
		ft_putendl_fd("Error", STDERR_FILENO);
	return (result);
}
