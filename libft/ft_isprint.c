/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:48:42 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/06/15 14:48:42 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 0)
	{
		return (0);
	}
	else if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}