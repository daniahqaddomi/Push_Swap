/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniah <daniah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 00:50:34 by daniah            #+#    #+#             */
/*   Updated: 2025/03/13 01:11:32 by daniah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
//#include <limits.h>
# include <libft.h>

# define MAX_SIZE 100
# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_digit
{
	int	data[MAX_SIZE];
	int	top;
}		t_digit;

// typedef struct s_stack
// {
//     t_stack    *stack_A;
//     t_stack    *stack_B;
// }       t_stack;

// push_swap
int		main(int argc, char *argv[]);
int		overflow(char *str);
int		valid_num(char *str);
int		duplicate(int val, t_digit *digit);
int		push(t_digit *digit, int val);
void	initialize(t_digit *digit);

#endif