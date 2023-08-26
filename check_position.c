/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:52:50 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 14:54:43 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static int	ft_target(t_no **stack_a, int b_i, int target_i, int pos)
{
	t_no	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index > b_i && tmp->index < target_i)
		{
			target_i = tmp->index;
			pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	if (target_i != INT_MAX)
		return (pos);
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index < target_i)
		{
			target_i = tmp->index;
			pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (pos);
}

static void	get_pos(t_no **stack)
{
	int		i;
	t_no	*tmp;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
	tmp = *stack;
	i = 0;
}

int	index_pos_low(t_no **stack)
{
	t_no	*tmp;
	int		low_i;
	int		low_pos;

	low_i = INT_MAX;
	tmp = *stack;
	low_pos = tmp->pos;
	get_pos(stack);
	while (tmp)
	{
		if (tmp->index < low_i)
		{
			low_i = tmp->index;
			low_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (low_pos);
}

void	target_pos(t_no **stack_a, t_no **stack_b)
{
	t_no	*tmp;
	int		pos;

	tmp = *stack_b;
	pos = 0;
	get_pos(stack_a);
	get_pos(stack_b);
	while (tmp)
	{
		pos = ft_target(stack_a, tmp->index, INT_MAX, pos);
		tmp->pos_target = pos;
		tmp = tmp->next;
	}
}
