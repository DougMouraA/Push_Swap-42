/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:49:14 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 14:52:28 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	cost_move(t_no **stack_a, t_no **stack_b)
{
	t_no	*a;
	t_no	*b;
	int		len_a;
	int		len_b;

	a = *stack_a;
	b = *stack_b;
	len_a = stack_len(a);
	len_b = stack_len(b);
	while (b)
	{
		b->vlue_move_b = b->pos;
		if (b->pos > len_b / 2)
			b->vlue_move_b = (len_b - b->pos) * (-1);
		b->vlue_move_a = b->pos_target;
		if (b->pos_target > len_a / 2)
			b->vlue_move_a = (len_a - b->pos_target) * (-1);
		b = b->next;
	}
}

void	low_cost(t_no **stack_a, t_no **stack_b)
{
	t_no	*tmp;
	int		low;
	int		vlue_move_a;
	int		vlue_move_b;

	tmp = *stack_b;
	low = INT_MAX;
	while (tmp)
	{
		if (abs_nbr(tmp->vlue_move_a) + abs_nbr(tmp->vlue_move_b) < \
									abs_nbr(low))
		{
			low = abs_nbr(tmp->vlue_move_b) + abs_nbr(tmp->vlue_move_a);
			vlue_move_a = tmp->vlue_move_a;
			vlue_move_b = tmp->vlue_move_b;
		}
		tmp = tmp->next;
	}
	ft_move(stack_a, stack_b, vlue_move_a, vlue_move_b);
}
