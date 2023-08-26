/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:36:54 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/07/13 16:36:54 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_function(char *p)
{
	free (p);
	return (0);
}

char	*mallocation(size_t size)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(size);
	if (!p)
		free_function(p);
	p[i] = '0';
	p[size - 1] = '\0';
	return (p);
}

int	ft_printhex(unsigned int n, char *str)
{
	int				size;
	unsigned int	ncpy;
	char			*newn;

	ncpy = n;
	size = 1;
	while (ncpy >= 16)
	{
		size++;
		ncpy = ncpy / 16;
	}
	newn = mallocation(size + 1);
	if (!newn)
		return (free_function(newn));
	while (n != 0)
	{
		newn[--size] = str[n % 16];
		n = n / 16;
	}
	n = ft_putstr(newn);
	free (newn);
	return (n);
}
