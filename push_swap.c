/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniah <daniah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 00:57:17 by daniah            #+#    #+#             */
/*   Updated: 2025/03/13 01:29:02 by daniah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// top index will always poit to the last element add to the stack
void	initialize(t_digit *digit)
{
	// i should initialize (-1) once when the stack first created to make sure the stack is empty
	digit->top = -1;
	//(-1) to make sure the stack doesn't contain any element cuz the stack will start from zero and i want to make sure before theres nothing there
}

int	push(t_digit *digit, int val)
{
	if (digit->top >= MAX_SIZE - 1) // checks for stack overflow
		return (1);
	digit->top++; // increments before storing the new value
	digit->data[digit->top] = val;
	return (0);
}

int	duplicate(int val, t_digit *digit)
{
	int	i;

	i = 0;
	while (i <= digit->top)
	{
		if (digit->data[i] == val)
			return (1); // i found a dup
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
			return (0); // doesn't start with a sign or digit
		str++;
	}
	return (1);
}

int	overflow(char *str)
{
	int	sign;

	long res; // atoll to handle large num
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

int	main(int argc, char *argv[])
{
	t_digit	digit;
	int		i;
	int		n;

	i = 1;
	if (argc < 2)
	{
		ft_printf("Invalid num of argumenr\n");
		return (0);
	}
	initialize(&digit);
	while (i < argc)
	{
		if (!valid_num(argv[i]))
		{
			ft_printf("not valid\n");
			return (1);
		}
		if (overflow(argv[i]))
		{
			ft_printf("overflow\n");
			return (1);
		}
		n = ft_atoi(argv[i]);
		if (duplicate(n, &digit))
		{
			ft_printf("dup\n");
			return (1);
		}
		push(&digit, n);
		i++;
	}
	return (0);
}
