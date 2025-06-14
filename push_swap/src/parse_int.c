/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:18:57 by alopez-v          #+#    #+#             */
/*   Updated: 2025/06/14 18:34:19 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "push_swap.h"

static int	is_space(const char character)
{
	return (character == ' ' || character == '\f' || character == '\n'
		|| character == '\r' || character == '\t' || character == '\v');
}

static int	is_sign(const char character)
{
	return (character == '-' || character == '+');
}

static int	is_digit(const char character)
{
	return (character >= '0' && character <= '9');
}

static int	digit_to_int(const char character)
{
	return (character - '0');
}

int	parse_int(const char *str, int *output)
{
	size_t	i;
	int		sign;
	int		num;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && is_space(str[i]))
		++i;
	sign = 1;
	while (str[i] && is_sign(str[i]))
	{
		if (str[i] == '-')
			sign = -sign;
		++i;
	}
	while (str[i] && is_digit(str[i]))
	{
		num = (num * 10) + digit_to_int(str[i]);
		++i;
	}
	if (str[i])
		return (0);
	*output = sign * num;
	return (1);
}
