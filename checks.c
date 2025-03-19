/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dqaddomi <dqaddomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:30:00 by daniah            #+#    #+#             */
/*   Updated: 2025/03/19 13:40:15 by dqaddomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicate(int val, t_stack *digit)
{
	int	i;

	i = 0;
	while (i <= digit->top)
	{
		if (digit->data[i].data == val)
			return (1);
		i++;
	}
	return (0);
}

int	valid_num(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	overflow(char *str)
{
	int		sign;
	long	res;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		if ((sign == 1 && res > INT_MAX) || (sign == -1 && res > (long)INT_MAX
				+ 1))
			return (1);
		str++;
	}
	return (0);
}

void	check_elements(int argc, char *argv[], t_stack *stack_a)
{
	int			i;
	int			n;
	t_element	a;

	i = argc - 1;
	while (0 < i)
	{
		if (!valid_num(argv[i]) || overflow(argv[i]))
		{
			ft_printf("Error\n");
			exit(0);
		}
		n = ft_atoi(argv[i]);
		if (duplicate(n, stack_a))
		{
			ft_printf("Error\n");
			exit(0);
		}
		a.data = n;
		push(stack_a, a);
		i--;
	}
}
