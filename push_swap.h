/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:15:42 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:20:03 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct t_no
{
	int			nbr;
	int			index;
	int			pos;
	int			pos_target;
	int			vlue_move_a;
	int			vlue_move_b;
	struct t_no	*next;

}	t_no;

// Checker's
int		check_chr(int argc, char **argv);
int		check_limit(int argc, char **argv);
int		check_double(int argc, char **argv);
int		check_param(int argc, char **argv);
int		chk_stack_order(t_no *stack);

/* Operations */

void	swap_a(t_no **list, int mode);
void	swap_b(t_no **stack_b, int mode);
void	swap_ss(t_no **stack_a, t_no **stack_b);
void	swap_pa(t_no **stack_a, t_no **stack_b);
void	swap_pb(t_no **stack_a, t_no **stack_b);
void	swap_ra(t_no **stack_a, int mode);
void	swap_rb(t_no **stack_b, int mode);
void	swap_rr(t_no **stack_a, t_no **stack_b);
void	swap_rra(t_no **stack_a, int mode);
void	swap_rrb(t_no **stack_b, int mode);
void	swap_rrr(t_no **stack_a, t_no **stack_b);
// Sort List
void	sort_by_three(t_no **stack);
void	sort_by_five(t_no **stack_b);
void	sort_plus(t_no **stack_a, t_no **stack_b);
// Help functions
int		stack_len(t_no *stack);
void	cost_move(t_no **stack_a, t_no **stack_b);
void	low_cost(t_no **stack_a, t_no **stack_b);
int		index_pos_low(t_no **stack);
void	target_pos(t_no **stack_a, t_no **stack_b);
void	index_elem(t_no **stack);
void	ft_move(t_no **stack_a, t_no **stack_b, \
				int vlue_move_a, int vlue_move_b);
int		abs_nbr(int n);

#endif
