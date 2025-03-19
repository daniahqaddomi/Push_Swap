/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dqaddomi <dqaddomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 00:50:34 by daniah            #+#    #+#             */
/*   Updated: 2025/03/19 13:43:39 by dqaddomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>
# include <stdlib.h>
# include <unistd.h>

# define MAX_SIZE 10000
# define INT_MAX 2147483647

typedef struct s_element
{
	int			data;
	int			index;
}				t_element;

typedef struct s_stack
{
	t_element	data[MAX_SIZE];
	int			top;
}				t_stack;

// push_swap
int				main(int argc, char *argv[]);
void			is_sorted(int argc, char **argv);
void			set_positions(t_stack *stack_a);
// checks.c
void			check_elements(int argc, char *argv[], t_stack *stack_a);
int				overflow(char *str);
int				valid_num(char *str);
int				duplicate(int val, t_stack *digit);
// operations_1.c
void			swap_a(t_stack *stack_a);
void			swap_b(t_stack *stack_b);
void			ss(t_stack *stack_a, t_stack *stack_b);
void			rrr(t_stack *stack_a, t_stack *stack_b);
// operations_2.c
void			rotate_a(t_stack *stack_a);
void			rotate_b(t_stack *stack_b);
void			rr(t_stack *stack_a, t_stack *stack_b);
void			reverse_rotate_a(t_stack *stack_a);
void			reverse_rotate_b(t_stack *stack_b);
// push.c
int				push(t_stack *digit, t_element val);
void			push_a(t_stack *stack_a, t_stack *stack_b);
void			push_b(t_stack *stack_a, t_stack *stack_b);
// radix_sort
int				get_max_bits(int size);
void			radix(t_stack *stack_a, t_stack *stack_b, int bits);
void			radix_sort(t_stack *stack_a, t_stack *stack_b);
// sort_numbers.c
void			sort_two_numbers(t_stack *stack_a);
void			sort_three_numbers(t_stack *stack_a);
void			sort_four_numbers(t_stack *stack_a, t_stack *stack_b);
void			sort_five_numbers(t_stack *stack_a, t_stack *stack_b);
void			minimum_to_top(t_stack *stack_a);

#endif