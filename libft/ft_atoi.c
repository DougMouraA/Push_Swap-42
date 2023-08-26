/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:32:14 by dmoura-a          #+#    #+#             */
/*   Updated: 2023/01/09 14:42:59 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

long int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				signal;
	long int		output;

	signal = 1;
	i = 0;
	output = 0;
	while (whitespace(str[i]))
		i++;
	if (str[i] == '-')
	{
		i++;
		signal = -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		output = (output * 10) + (str[i] - '0');
		if (output * signal > 2147483647 || output * signal < -2147483648)
			return (3333333333);
		i++;
	}
	return (output * signal);
}
