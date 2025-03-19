/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dqaddomi <dqaddomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 00:57:17 by daniah            #+#    #+#             */
/*   Updated: 2025/03/19 13:49:15 by dqaddomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_positions(t_stack *stack_a)
{
	int		i;
	int		j;
	int		position;
	t_stack	*temp;

	temp = stack_a;
	i = 0;
	position = 0;
	while (i <= temp->top)
	{
		j = 0;
		while (j <= temp->top)
		{
			if (temp->data[i].data > temp->data[j].data)
				position++;
			j++;
		}
		temp->data[i].index = position;
		position = 0;
		i++;
	}
}

void	is_sorted(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			return ;
		i++;
	}
	exit(0);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		size;

	if (argc < 2)
		return (0);
	size = argc - 1;
	stack_a.top = -1;
	stack_b.top = -1;
	is_sorted(argc, argv);
	check_elements(argc, argv, &stack_a);
	set_positions(&stack_a);
	if (size == 2)
		sort_two_numbers(&stack_a);
	else if (size == 3)
		sort_three_numbers(&stack_a);
	else if (size == 4)
		sort_four_numbers(&stack_a, &stack_b);
	else if (size == 5)
		sort_five_numbers(&stack_a, &stack_b);
	if (size > 5)
		radix_sort(&stack_a, &stack_b);
	return (0);
}
