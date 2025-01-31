/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:56:53 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/31 16:23:26 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stddef.h>

//	Definitions
typedef enum e_ops
{
	sa = 0,
	sb = 1,
	ss = 2,
	pa = 3,
	pb = 4,
	ra = 5,
	rb = 6,
	rr = 7,
	rra = 8,
	rrb = 9,
	rrr = 10
}					t_ops;

//	Structs
typedef struct s_stack
{
	struct s_stack	*prev;
	struct s_stack	*next;
	void			*content;
}					t_stack;

//	Functions
t_stack				*ft_invoke_best(t_stack *stack_a, t_stack *stack_b);
void				ft_solve(t_stack **stack_a, t_stack **stack_b);
void				ft_stack_clear(t_stack **stack, void (*del)(void *));
size_t				ft_stack_count(const t_stack *stack, const size_t max);
void				ft_stack_del(t_stack *node, void (*del)(void *));
void				ft_stack_detach(t_stack *node);
t_stack				*ft_stack_new(void *content);
t_stack				*ft_stack_parse(int argc, char **argv);
t_stack				*ft_stack_popback(t_stack **stack);
t_stack				*ft_stack_popfront(t_stack **stack);
void				ft_stack_print(t_stack *stack, void (*print)(void *));
void				ft_stack_printint(void *ptr);
void				ft_stack_printstr(void *ptr);
void				ft_stack_push_all(t_stack **from, t_stack **to);
void				ft_stack_push(t_stack **from, t_stack **to);
void				ft_stack_pushback(t_stack **stack, t_stack *node);
void				ft_stack_pushfront(t_stack **stack, t_stack *node);
void				ft_stack_rotate(t_stack **stack);
void				ft_stack_rrotate(t_stack **stack);
void				ft_stack_swap(t_stack **stack);
int					ft_strtoi(const char *str, int **result);
int					ft_validate(t_stack *stack);

#endif