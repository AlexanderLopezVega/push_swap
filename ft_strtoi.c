/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:20:28 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/30 13:03:23 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(const char c)
{
	return (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v');
}

static void	ft_skipspace(char *ptr)
{
	if (!ptr)
		return ;
	while (*ptr && ft_isspace(*ptr))
		++ptr;
}

static int	ft_getsign(char *ptr)
{
	int	sign;

	sign = 1;
	if (!ptr)
		return (sign);
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign = -1;
		++ptr;
	}
	return (sign);
}

static int	ft_getexp(char *ptr, int *num)
{
	char	*start;

	if (!ptr || !num)
		return (0);
	start = ptr;
	*num = 0;
	while (*ptr && *ptr >= '0' && *ptr <= '9')
	{
		*num = (*num * 10) - (*ptr - '0');
		++ptr;
	}
	*num = -(*num);
	return (start != ptr);
}

int	ft_strtoi(const char *str, int *result)
{
	char	*iter;
	int		sign;
	int		exponent;

	if (!str || !result)
		return (0);
	iter = (char *)str;
	ft_skipspace(iter);
	sign = ft_getsign(iter);
	if (!ft_getexp(iter, &exponent))
		return (0);
	*result = sign * exponent;
	return (1);
}
