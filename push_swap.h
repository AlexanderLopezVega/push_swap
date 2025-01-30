/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:56:53 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 16:16:49 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stddef.h>

//	Structs
typedef struct s_stack
{
	struct s_stack	*prev;
	struct s_stack	*next;
	void			*content;
}					t_stack;

//	Functions
int					ft_solve(t_stack **stack_a, t_stack **stack_b,
						t_stack **instructions);
void				ft_stack_clear(t_stack **stack, void (*del)(void *));
void				ft_stack_del(t_stack *node, void (*del)(void *));
void				ft_stack_detach(t_stack *node);
t_stack				*ft_stack_new(void *content);
t_stack				*ft_stack_parse(int argc, char **argv);
t_stack				*ft_stack_popback(t_stack **stack);
t_stack				*ft_stack_popfront(t_stack **stack);
void				ft_stack_print(t_stack *stack, void (*print)(void *));
void				ft_stack_printint(void *ptr);
void				ft_stack_printstr(void *ptr);
void				ft_stack_push(t_stack **a, t_stack **b);
void				ft_stack_pushback(t_stack **stack, t_stack *node);
void				ft_stack_pushfront(t_stack **stack, t_stack *node);
void				ft_stack_rotate(t_stack **stack);
void				ft_stack_rrotate(t_stack **stack);
void				ft_stack_swap(t_stack **stack);
int					ft_strtoi(const char *str, int **result);

#endif