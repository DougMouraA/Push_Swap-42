/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:00:48 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/07/13 17:00:48 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printptr(void *p, char *str)
{
	size_t	size;
	size_t	adrs;
	char	*newp;

	ft_putstr ("0x");
	adrs = (size_t)p;
	size = 1;
	while (adrs >= 16)
	{
		size++;
		adrs = adrs / 16;
	}
	newp = mallocation(size + 1);
	if (!newp)
		return (free_function(newp));
	adrs = (size_t)p;
	while (adrs != 0)
	{
		newp[--size] = str[adrs % 16];
		adrs = adrs / 16;
	}
	adrs = ft_putstr(newp);
	free (newp);
	return (adrs + 2);
}
