/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dqaddomi <dqaddomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:39:06 by daniah            #+#    #+#             */
/*   Updated: 2025/03/19 14:03:50 by dqaddomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack_a)
{
	t_element	tmp;

	if (stack_a->top >= 1)
	{
		tmp = stack_a->data[stack_a->top];
		stack_a->data[stack_a->top] = stack_a->data[stack_a->top - 1];
		stack_a->data[stack_a->top - 1] = tmp;
		ft_printf("sa\n");
	}
}

void	swap_b(t_stack *stack_b)
{
	t_element	tmp;

	if (stack_b->top >= 1)
	{
		tmp = stack_b->data[stack_b->top];
		stack_b->data[stack_b->top] = stack_b->data[stack_b->top - 1];
		stack_b->data[stack_b->top - 1] = tmp;
		ft_printf("sb\n");
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	ft_printf("ss\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
	ft_printf("rrr\n");
}
