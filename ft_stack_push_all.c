/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:02:22 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/31 16:03:35 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_push_all(t_stack **from, t_stack **to)
{
	if (!from || !to)
		return ;
	while (*from)
		ft_stack_push(from, to);
}