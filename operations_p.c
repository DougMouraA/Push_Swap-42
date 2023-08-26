/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:11:26 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:11:59 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	swap_pa(t_no **stack_a, t_no **stack_b)
{
	t_no	*tmp;

	if (!*stack_b)
		return ;
	tmp = (*stack_b)->next;
	if (!*stack_a)
		(*stack_b)->next = NULL;
	else
		(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp;
	write(1, "pa\n", 3);
}

void	swap_pb(t_no **stack_a, t_no **stack_b)
{
	t_no	*tmp;

	if (!*stack_a)
		return ;
	tmp = (*stack_a)->next;
	if (!*stack_b)
		(*stack_a)->next = NULL;
	else
		(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
	write(1, "pb\n", 3);
}
