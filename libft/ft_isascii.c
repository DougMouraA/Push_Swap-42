/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:46:31 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/06/15 14:46:31 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0)
	{
		return (0);
	}
	else if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}