/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:54:44 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 18:18:54 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "push_swap.h"

static t_stack	*node_parse(const char *str)
{
	t_stack	*node;
	int		*value;

	value = malloc(sizeof(int));
	if (value)
	{
		if (parse_int(str, value))
		{
			node = stack_new(value);
			if (node)
				return (node);
		}
		free(value);
	}
	return (NULL);
}

t_stack	*stack_parse(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;

	if (argc < 2 || !argv)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		node = node_parse(argv[1]);
		if (node)
		{
			stack_append(&stack, node);
			++i;
			continue ;
		}
		stack_delete(stack, free);
		return (NULL);
	}
	return (stack);
}
