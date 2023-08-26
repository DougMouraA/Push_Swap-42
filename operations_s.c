/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:14:49 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:15:19 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	swap_a(t_no **stack_a, int mode)
{
	t_no	*tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	(*stack_a) = tmp;
	if (mode)
		write(1, "sa\n", 3);
}

void	swap_b(t_no **stack_b, int mode)
{
	t_no	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = *stack_b;
	(*stack_b) = tmp;
	if (mode)
		write(1, "sb\n", 3);
}

void	swap_ss(t_no **stack_a, t_no **stack_b)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	write(1, "ss\n", 3);
}
