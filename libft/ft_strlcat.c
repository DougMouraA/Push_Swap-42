/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglasmoura <douglasmoura@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:30:17 by douglasmour       #+#    #+#             */
/*   Updated: 2022/06/19 20:10:55 by douglasmour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_str;

	i = 0;
	while (*dst && i < size)
	{
		++dst;
		++i;
	}
	size_str = ft_strlcpy(dst, src, size - i);
	return (size_str + i);
}
