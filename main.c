/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:44:45 by douglas           #+#    #+#             */
/*   Updated: 2023/01/09 17:01:41 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stack(t_no **stack)
{
	t_no	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
	temp = NULL;
}

void	end_of_list(t_no **list, int num)
{
	t_no	*aux;
	t_no	*new;

	new = malloc(sizeof(t_no));
	if (new)
	{
		new->nbr = num;
		new->next = NULL;
		if (*list == NULL)
					*list = new;
		else
		{
			aux = *list;
			while (aux->next)
				aux = aux->next;
			aux->next = new;
		}
	}
}

static t_no	*make_list(int argc, char **argv)
{
	int		i;
	t_no	*list;

	list = NULL;
	i = 1;
	while (i < argc)
	{
		end_of_list(&list, ft_atoi(argv[i]));
		i++;
	}
	return (list);
}

int	main(int argc, char **argv)
{
	t_no	*list_a;
	t_no	*list_b;
	int		size;

	list_b = NULL;
	if (!check_param(argc, argv))
		return (ft_printf("Invalid Params!\n"));
	list_a = make_list(argc, argv);
	index_elem(&list_a);
	size = stack_len(list_a);
	if (size <= 4)
		sort_by_three(&list_a);
	else if (size <= 6)
		sort_by_five(&list_a);
	else
		sort_plus(&list_a, &list_b);
	free_stack(&list_a);
	list_a = NULL;
	list_b = NULL;
	return (0);
}
