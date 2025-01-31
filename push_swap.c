/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:09:44 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/31 16:22:19 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_stack	*instructions;
	t_stack	*a;
	t_stack	*b;
	
	instructions = NULL;
	a = ft_stack_parse(argc, argv);
	b = NULL;
	if (a && ft_validate(a))
		ft_solve(&a, &b);
	else
		ft_putendl_fd("Error", 2),
	ft_stack_clear(&a, free);
	ft_stack_clear(&b, free);
}
