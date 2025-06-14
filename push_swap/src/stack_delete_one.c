/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_delete_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:47:06 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 17:51:57 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "push_swap.h"

void	stack_delete_one(t_stack *node, void (*const free)(void *content))
{
	if (!node)
		return ;
	if (free)
		free(node->content);
	node->next = NULL;
	node->prev = NULL;
	free(node);
}
