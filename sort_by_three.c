/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:22:40 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:22:52 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	sort_by_three(t_no **stack)
{
	t_no	*tmp;

	while (!chk_stack_order(*stack))
	{
		tmp = (*stack)->next;
		if (((*stack)->nbr > tmp->nbr))
			swap_a(stack, 1);
		else
			swap_rra(stack, 1);
	}
}
