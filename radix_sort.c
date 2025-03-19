/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniah <daniah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:34:43 by daniah            #+#    #+#             */
/*   Updated: 2025/03/19 00:35:59 by daniah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(int size)
{
	int	max_bits;
	int	max_num;

	max_bits = 0;
	max_num = size;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix(t_stack *stack_a, t_stack *stack_b, int bits)
{
	int	size;
	int	i;
	int	num;

	size = stack_a->top;
	i = 0;
	while (i < size + 1)
	{
		if (stack_a->top >= 0)
		{
			num = stack_a->data[stack_a->top].index;
			if (((num >> bits) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			i++;
		}
		else
			break ;
	}
	while (stack_b->top >= 0)
		push_a(stack_a, stack_b);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	max_bits;
	int	bits;

	stack_b->top = -1;
	max_bits = get_max_bits(stack_a->top);
	bits = 0;
	while (bits < max_bits)
	{
		radix(stack_a, stack_b, bits);
		bits++;
	}
}
