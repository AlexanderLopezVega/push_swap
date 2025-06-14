/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:12:39 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 18:24:36 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void	print_node(void *content)
{
	printf("%d", *(int *)(content));
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc >= 2)
	{
		stack = stack_parse(argc, argv);
		if (stack)
		{
			printf("Stack parsed correctly\n");
			stack_apply(stack, print_node);
			stack_delete(stack, &free);
			return (0);
		}
	}
	printf("Error\n");
	return (1);
}
