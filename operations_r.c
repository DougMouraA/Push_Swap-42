/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:12:12 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:13:27 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	swap_ra(t_no **stack_a, int mode)
{
	t_no	*tmp;
	t_no	*temp_tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	temp_tmp = (*stack_a)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = temp_tmp;
	if (mode)
		write(1, "ra\n", 3);
}

void	swap_rb(t_no **stack_b, int mode)
{
	t_no	*tmp;
	t_no	*temp_tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	temp_tmp = (*stack_b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack_b;
	(*stack_b)->next = NULL;
	*stack_b = temp_tmp;
	if (mode)
		write(1, "rb\n", 3);
}

void	swap_rr(t_no **stack_a, t_no **stack_b)
{
	swap_ra(stack_a, 0);
	swap_rb(stack_b, 0);
	write(1, "rr\n", 3);
}
