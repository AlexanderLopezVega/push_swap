/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:11:19 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 13:03:18 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

static int	ft_getcontent(const char *arg, void **result)
{
	if (!arg || !result)
		return (0);
	*result = malloc(sizeof(int));
	if (*result && ft_strtoi(arg, *((int **)result)))
		return (1);
	ft_ffree(result);
	return (0);
}

t_stack	*ft_parse(const int argc, char **argv)
{
	t_stack	*stack;
	void	*content;
	int		i;

	if (argc <= 1 || !argv)
		return (NULL);
	stack = ft_stack_new();
	i = 1;
	while (i < argc)
	{
		if (!ft_getcontent(argv[i], &content) || !ft_stack_push(stack, content))
		{
			ft_stack_del(&stack, ft_sfree);
			ft_sfree(content);
			return (NULL);
		}
		++i;
	}
	return (stack);
}
