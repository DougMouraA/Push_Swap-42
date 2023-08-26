/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:20:26 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:21:01 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	three_left(t_no **stack_a, t_no **stack_b)
{
	int	i;
	int	send;
	int	size;

	size = stack_len(*stack_a);
	send = 0;
	i = 0;
	while (size > 6 && i < size && send < size / 2)
	{
		if ((*stack_a)->index <= size / 2)
		{
			swap_pb(stack_a, stack_b);
			send++;
		}
		else
			swap_ra(stack_a, 1);
		i++;
	}
	while (size - send > 3)
	{
		swap_pb(stack_a, stack_b);
		send++;
	}
}

static void	stack_right_sort(t_no **stack_a)
{
	int	low_pos;
	int	size;

	size = stack_len(*stack_a);
	low_pos = index_pos_low(stack_a);
	if (low_pos > size / 2)
	{
		while (low_pos < size)
		{
			swap_rra(stack_a, 1);
			low_pos++;
		}
	}
	else
	{
		while (low_pos > 0)
		{
			swap_ra(stack_a, 1);
			low_pos--;
		}
	}
}

void	sort_plus(t_no **stack_a, t_no **stack_b)
{
	three_left(stack_a, stack_b);
	sort_by_three(stack_a);
	while (*stack_b)
	{
		target_pos(stack_a, stack_b);
		cost_move(stack_a, stack_b);
		low_cost(stack_a, stack_b);
	}
	if (!chk_stack_order(*stack_a))
		stack_right_sort(stack_a);
}
