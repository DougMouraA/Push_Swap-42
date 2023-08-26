/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:07:58 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 15:08:43 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static void	bubble_s(int **pos_arry, int size)
{
	int	i;
	int	j;
	int	aux;
	int	*pos;

	i = 1;
	pos = *pos_arry;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (pos[j] > pos[j + 1])
			{
				aux = pos[j];
				pos[j] = pos[j + 1];
				pos[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
	*pos_arry = pos;
}

static void	fill_arry(t_no **stack, int **pos)
{
	int		i;
	int		*n;
	t_no	*tmp;

	i = 0;
	n = *pos;
	tmp = *stack;
	while (tmp)
	{
		n[i] = tmp->nbr;
		tmp = tmp->next;
		i++;
	}
	*pos = n;
}

void	index_elem(t_no **stack)
{
	t_no	*tmp;
	int		*n;
	int		i;

	n = malloc(sizeof(int) * stack_len(*stack));
	if (!n)
	{
		ft_printf("Error to alocation memory");
		exit (0);
	}
	fill_arry(stack, &n);
	bubble_s(&n, stack_len(*stack));
	i = 0;
	while (i < stack_len(*stack))
	{
		tmp = *stack;
		while (tmp->nbr != n[i])
			tmp = tmp->next;
		tmp->index = i;
		i++;
	}
	free (n);
}
