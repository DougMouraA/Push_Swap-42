/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:13:56 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:14:34 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	swap_rra(t_no **stack_a, int mode)
{
	t_no	*tmp;
	t_no	*temp_tmp;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	while (tmp->next)
	{
		temp_tmp = tmp;
		tmp = tmp->next;
	}
	temp_tmp->next = NULL;
	tmp->next = *stack_a;
	*stack_a = tmp;
	if (mode)
		write(1, "rra\n", 4);
}

void	swap_rrb(t_no **stack_b, int mode)
{
	t_no	*tmp;
	t_no	*temp_tmp;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	while (tmp->next)
	{
		temp_tmp = tmp;
		tmp = tmp->next;
	}
	temp_tmp->next = NULL;
	tmp->next = *stack_b;
	*stack_b = tmp;
	if (mode)
		write(1, "rrb\n", 4);
}

void	swap_rrr(t_no **stack_a, t_no **stack_b)
{
	swap_rra(stack_a, 0);
	swap_rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
