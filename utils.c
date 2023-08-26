/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:23:15 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 17:15:04 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	stack_len(t_no *stack)
{
	int		size;
	t_no	*tmp;

	tmp = stack;
	size = 0;
	if (!stack)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}

int	abs_nbr(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	*create_num(int argc, char **argv)
{
	int	pos_argc;
	int	*argv_nbr;

	pos_argc = 1;
	argv_nbr = malloc(sizeof(int) * (argc - 1));
	if (!argv_nbr)
		return (0);
	while (pos_argc < argc)
	{
		argv_nbr[pos_argc - 1] = ft_atoi(argv[pos_argc]);
		pos_argc++;
	}
	return (argv_nbr);
}

int	check_double(int argc, char **argv)
{
	int	*argv_nbr;
	int	i;
	int	j;

	argv_nbr = create_num(argc, argv);
	if (!argv_nbr)
		return (0);
	i = 0;
	while (i < argc - 2)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (argv_nbr[i] == argv_nbr[j])
			{
				free(argv_nbr);
				return (0);
			}
			j++;
		}
		i++;
	}
	free(argv_nbr);
	return (1);
}
