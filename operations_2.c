/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dqaddomi <dqaddomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:27:04 by daniah            #+#    #+#             */
/*   Updated: 2025/03/19 14:07:10 by dqaddomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *stack_a)
{
	int			i;
	t_element	tmp;

	i = stack_a->top;
	if (stack_a->top > 1)
	{
		tmp = stack_a->data[stack_a->top];
		while (i - 1 >= 0)
		{
			stack_a->data[i] = stack_a->data[i - 1];
			i--;
		}
		stack_a->data[0] = tmp;
		ft_printf("ra\n");
	}
}

void	rotate_b(t_stack *stack_b)
{
	int			i;
	t_element	tmp;

	i = stack_b->top;
	if (stack_b->top > 1)
	{
		tmp = stack_b->data[stack_b->top];
		while (i - 1 >= 0)
		{
			stack_b->data[i] = stack_b->data[i - 1];
			i--;
		}
		stack_b->data[0] = tmp;
		ft_printf("rb\n");
	}
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	ft_printf("rr\n");
}

void	reverse_rotate_a(t_stack *stack_a)
{
	int			i;
	t_element	tmp;

	if (stack_a->top > 0)
	{
		tmp = stack_a->data[0];
		i = 0;
		while (i < stack_a->top)
		{
			stack_a->data[i] = stack_a->data[i + 1];
			i++;
		}
		stack_a->data[stack_a->top] = tmp;
		ft_printf("rra\n");
	}
}

void	reverse_rotate_b(t_stack *stack_b)
{
	int			i;
	t_element	tmp;

	if (stack_b->top > 0)
	{
		tmp = stack_b->data[0];
		i = 0;
		while (i < stack_b->top)
		{
			stack_b->data[i] = stack_b->data[i + 1];
			i++;
		}
		stack_b->data[stack_b->top] = tmp;
		ft_printf("rrb\n");
	}
}
