/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:59:05 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/07/13 16:59:54 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	negativ_n(void)
{
	char	neg;

	neg = '-';
	write (1, &neg, 1);
	return (1);
}

static size_t	verify_n(int n)
{
	size_t	ncpy;

	if (n < 0)
	{
		if (n == -2147483648)
			ncpy = 2147483648;
		else
			ncpy = (-1 * n);
	}
	else
		ncpy = n;
	return (ncpy);
}

int	ft_putnbr(int n)
{
	size_t	size;
	size_t	ncpy;
	size_t	count;
	char	strnum;

	ncpy = verify_n(n);
	size = 1;
	count = 0;
	if (n < 0)
		count = count + negativ_n();
	while (ncpy >= 10)
	{
		ncpy = ncpy / 10;
		size = size * 10;
	}
	ncpy = verify_n(n);
	while (size > 0)
	{
		strnum = (ncpy / size) + '0';
		write(1, &strnum, 1);
		ncpy = ncpy % size;
		size = size / 10;
		count++;
	}
	return (count);
}
