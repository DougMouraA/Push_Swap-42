/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:09:19 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:11:02 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static void	rrr_both(t_no **stack_a, t_no **stack_b, \
											int *vlue_move_a, int *vlue_move_b)
{
	while (*vlue_move_a < 0 && *vlue_move_b < 0)
	{
		(*vlue_move_a)++;
		(*vlue_move_b)++;
		swap_rrr(stack_a, stack_b);
	}
}

static void	rr_both(t_no **stack_a, t_no **stack_b, \
										int *vlue_move_a, int *vlue_move_b)
{
	while (*vlue_move_a > 0 && *vlue_move_b > 0)
	{
		(*vlue_move_a)--;
		(*vlue_move_b)--;
		swap_rr(stack_a, stack_b);
	}
}

static void	mod_ra(t_no **stack_a, int *vlue_move)
{
	while (*vlue_move)
	{
		if (*vlue_move > 0)
		{
			swap_ra(stack_a, 1);
			(*vlue_move)--;
		}
		else if (*vlue_move < 0)
		{
			swap_rra(stack_a, 1);
			(*vlue_move)++;
		}
	}
}

static void	mod_rb(t_no **stack_b, int *vlue_move)
{
	while (*vlue_move)
	{
		if (*vlue_move > 0)
		{
			swap_rb(stack_b, 1);
			(*vlue_move)--;
		}
		else if (*vlue_move < 0)
		{
			swap_rrb(stack_b, 1);
			(*vlue_move)++;
		}
	}
}

void	ft_move(t_no **stack_a, t_no **stack_b, \
							int vlue_move_a, int vlue_move_b)
{
	if (vlue_move_a < 0 && vlue_move_b < 0)
		rrr_both(stack_a, stack_b, &vlue_move_a, &vlue_move_b);
	else if (vlue_move_a > 0 && vlue_move_b > 0)
		rr_both(stack_a, stack_b, &vlue_move_a, &vlue_move_b);
	mod_ra(stack_a, &vlue_move_a);
	mod_rb(stack_b, &vlue_move_b);
	swap_pa(stack_a, stack_b);
}
