/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:37:09 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 18:25:38 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//	Structs
typedef struct s_stack
{
	void			*content;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

//	Functions
int		parse_int(const char *str, int *output);
void	stack_append(t_stack **stack, t_stack *node);
void	stack_apply(const t_stack *stack,
			void (*const function)(void *content));
void	stack_delete_one(t_stack *node, void (*const free)(void *content));
void	stack_delete(t_stack *stack, void (*const free)(void *content));
t_stack	*stack_extract(t_stack **stack);
t_stack	*stack_new(void *content);
t_stack	*stack_parse(int argc, char **argv);

#endif