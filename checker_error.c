/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:57:57 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:07:29 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	check_chr(int argc, char **argv)
{
	int	pos_chr;
	int	pos_arg;

	pos_arg = 1;
	while (pos_arg < argc)
	{
		pos_chr = 0;
		while (pos_chr < (int)ft_strlen(argv[pos_arg]))
		{
			if (!ft_isdigit(argv[pos_arg][pos_chr]) \
					&& argv[pos_arg][pos_chr] != '-')
				return (0);
			if (argv[pos_arg][pos_chr] == '-' && pos_chr > 0)
				return (0);
			pos_chr++;
		}
		pos_arg++;
	}
	return (1);
}

int	check_limit(int argc, char **argv)
{
	int	pos_arg;

	pos_arg = 1;
	while (pos_arg < argc)
	{
		if (ft_atoi(argv[pos_arg]) == 3333333333)
			return (0);
		pos_arg++;
	}
	return (1);
}

int	check_param(int argc, char **argv)
{
	if (!check_chr(argc, argv))
		return (0);
	if (!check_double(argc, argv))
		return (0);
	if (!check_limit(argc, argv))
		return (0);
	return (1);
}

int	chk_stack_order(t_no *stack)
{
	t_no	*tmp;
	t_no	*next;

	tmp = stack;
	while (tmp)
	{
		next = tmp->next;
		if (next)
		{
			if (tmp->nbr > next->nbr)
				break ;
		}
	tmp = tmp->next;
	}
	if (!tmp)
		return (1);
	return (0);
}
