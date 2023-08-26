/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:45:16 by douglasmour       #+#    #+#             */
/*   Updated: 2023/01/09 14:43:59 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verify(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

static char	*string_null(void)
{
	char	*newstring;

	newstring = (char *)malloc(1);
	if (!newstring)
		return (0);
	*(newstring) = '\0';
	return (newstring);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	i = 0;
	if (!s1)
		return (0);
	j = ft_strlen(s1) - 1;
	while (verify(s1[i], set) == 0 && i < ft_strlen(s1))
			i++;
	while (verify(s1[j], set) == 0 && j > 0)
		j--;
	if (i > j || (i == 0 && j == 0))
		return (string_null());
	newstr = ft_substr(s1, i, j - i + 1);
	if (!newstr)
		return (0);
	return (newstr);
}
