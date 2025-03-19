/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniah <daniah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:34:22 by daniah            #+#    #+#             */
/*   Updated: 2025/03/19 01:17:25 by daniah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_stack *digit, t_element val)
{
	digit->top++;
	if (digit->top >= MAX_SIZE - 1)
		return (1);
	digit->data[digit->top] = val;
	return (0);
}

void	push_a(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->top >= 0)
		push(stack_a, stack_b->data[stack_b->top]);
	stack_b->top--;
	ft_printf("pa\n");
}

void	push_b(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top >= 0)
		push(stack_b, stack_a->data[stack_a->top]);
	stack_a->top--;
	ft_printf("pb\n");
}
