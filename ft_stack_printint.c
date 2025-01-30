/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_printint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:09:59 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 16:11:56 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>

void	ft_stack_printint(void *ptr)
{
	char	*str;

	str = ft_itoa(*((int *)ptr));
	if (!str)
		return ;
	ft_putstr_fd(str, 1);
	free(str);
}