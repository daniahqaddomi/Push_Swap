/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dqaddomi <dqaddomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 21:20:13 by daniah            #+#    #+#             */
/*   Updated: 2025/03/19 13:58:13 by dqaddomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_numbers(t_stack *stack_a)
{
	if (stack_a->data[0].data < stack_a->data[1].data)
		swap_a(stack_a);
}

void	sort_three_numbers(t_stack *stack_a)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = stack_a->data[2].data;
	num2 = stack_a->data[1].data;
	num3 = stack_a->data[0].data;
	if (num1 > num2 && num2 > num3)
	{
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (num1 > num3 && num3 > num2)
		rotate_a(stack_a);
	else if (num2 > num1 && num1 > num3)
		reverse_rotate_a(stack_a);
	else if (num2 > num3 && num3 > num1)
	{
		reverse_rotate_a(stack_a);
		swap_a(stack_a);
	}
	else if (num3 > num1 && num1 > num2)
		swap_a(stack_a);
}

void	minimum_to_top(t_stack *stack_a)
{
	int	index;
	int	index_pos;
	int	i;

	i = -1;
	index = stack_a->data[0].index;
	index_pos = 0;
	while (++i <= stack_a->top)
	{
		if (stack_a->data[i].index < index)
		{
			index = stack_a->data[i].index;
			index_pos = i;
		}
	}
	if (index_pos <= stack_a->top / 2)
	{
		while (stack_a->data[stack_a->top].index != index)
			reverse_rotate_a(stack_a);
	}
	else
	{
		while (stack_a->data[stack_a->top].index != index)
			rotate_a(stack_a);
	}
}

void	sort_four_numbers(t_stack *stack_a, t_stack *stack_b)
{
	minimum_to_top(stack_a);
	push_b(stack_a, stack_b);
	sort_three_numbers(stack_a);
	push_a(stack_a, stack_b);
}

void	sort_five_numbers(t_stack *stack_a, t_stack *stack_b)
{
	minimum_to_top(stack_a);
	push_b(stack_a, stack_b);
	sort_four_numbers(stack_a, stack_b);
	push_a(stack_a, stack_b);
}
