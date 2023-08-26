/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:57:10 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/07/13 16:58:53 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_u(unsigned int n)
{
	size_t			size;
	unsigned int	ncpy;
	size_t			count;
	char			strnum;

	ncpy = n;
	size = 1;
	count = 0;
	while (ncpy >= 10)
	{
		ncpy = ncpy / 10;
		size = size * 10;
	}
	ncpy = n;
	while (size > 0)
	{
		strnum = (ncpy / size) + '0';
		write (1, &strnum, 1);
		ncpy = ncpy % size;
		size = size / 10;
		count++;
	}
	return (count);
}
