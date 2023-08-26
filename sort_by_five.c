/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:21:18 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:22:17 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static void	gt_min_max(int *min, int *max, t_no *stack)
{
	t_no	*tmp;

	if (!stack)
		return ;
	*max = stack->nbr;
	*min = stack->nbr;
	tmp = stack;
	while (tmp)
	{
		if (tmp->nbr > *max)
			*max = tmp->nbr;
		if (tmp->nbr < *min)
			*min = tmp->nbr;
		tmp = tmp->next;
	}
	tmp = NULL;
}

static void	swp_min_max(int min, int max, t_no **stack_a, t_no **stack_b)
{
	int		idx;
	t_no	*tmp;

	tmp = *stack_a;
	idx = 1;
	while (idx < 3)
	{
		if (tmp->nbr == max || tmp->nbr == min)
			break ;
		tmp = tmp->next;
		idx++;
	}
	tmp = *stack_a;
	if (idx < 3)
	{
		while ((*stack_a)->nbr != max && (*stack_a)->nbr != min)
			swap_ra(stack_a, 1);
	}
	else
	{
		while ((*stack_a)->nbr != max && (*stack_a)->nbr != min)
			swap_rra(stack_a, 1);
	}
	swap_pb(stack_a, stack_b);
}

void	sort_by_five(t_no **stack_a)
{
	int		min;
	int		max;
	t_no	*stack_b;

	stack_b = NULL;
	min = 0;
	max = 0;
	gt_min_max(&min, &max, *stack_a);
	if (chk_stack_order(*stack_a))
		exit (0);
	swp_min_max(min, max, stack_a, &stack_b);
	swp_min_max(min, max, stack_a, &stack_b);
	sort_by_three(stack_a);
	if (stack_b->nbr == max)
	{
		swap_pa(stack_a, &stack_b);
		swap_ra(stack_a, 1);
		swap_pa(stack_a, &stack_b);
	}
	else
	{
		swap_pa(stack_a, &stack_b);
		swap_pa(stack_a, &stack_b);
		swap_ra(stack_a, 1);
	}
}
