/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:27:18 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 16:01:19 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_stack	*ft_stack_parse(int argc, char **argv)
{
	t_stack *stack;
	t_stack *node;
	int *num;
	int i;

	stack = NULL;
	num = NULL;
	i = 1;
	while (i < argc)
	{
		if (ft_strtoi(argv[i], &num))
		{
			node = ft_stack_new(num);
			if (node)
			{
				ft_stack_pushback(&stack, node);
				++i;
				continue;
			}
		}
		ft_stack_clear(&stack, free);
		return (NULL);
	}
	return (stack);
}