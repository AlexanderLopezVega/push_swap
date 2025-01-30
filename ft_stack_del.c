/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:43:02 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 13:03:21 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_del(t_stack **stack, void (*del)(void *))
{
	if (!stack)
		return ;
	ft_lstclear(&(*stack)->lst, del);
	ft_ffree((void **)stack);
}
