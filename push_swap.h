/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:56:53 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 13:03:35 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stddef.h>

//	Structs
typedef struct s_stack
{
	t_list	*lst;
}			t_stack;

//	Functions
void		ft_ffree(void **ptr);
t_stack		*ft_parse(const int argc, char **argv);
void		ft_sfree(void *ptr);
t_stack		*ft_solve(t_stack *stack_a, t_stack *stack_b);
void		ft_stack_del(t_stack **stack, void (*del)(void *));
void		ft_stack_iter(t_stack *stack, void (*f)(void *));
t_stack		*ft_stack_new(void);
int			ft_stack_push(t_stack *stack, void *content);
int			ft_strtoi(const char *str, int *result);

#endif