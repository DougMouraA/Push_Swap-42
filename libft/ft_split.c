/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:02:47 by dmoura-a          #+#    #+#             */
/*   Updated: 2023/01/11 14:02:54 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**malloc_array(char const *s, char c)
{
	size_t	size;
	size_t	pos;
	size_t	check_div;
	char	**ptr;

	size = 0;
	pos = 0;
	check_div = 1;
	while (*(s + pos))
	{
		if (check_div == 1 && *(s + pos) != c)
		{
			check_div = 0;
			size++;
		}
		else if (*(s + pos) == c)
			check_div = 1;
		pos++;
	}
	ptr = (char **)malloc(sizeof(char **) * (size + 1));
	if (!ptr)
		return (0);
	ptr[size] = 0;
	return (ptr);
}

static char	*malloc_strings(char const *s, char c)
{
	size_t	size;
	size_t	i;
	char	*ptr;

	size = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			size++;
		else if (s[i] == c && size > 0)
			break ;
		i++;
	}
	ptr = ft_substr(s, 0, size);
	if (!ptr)
		return (0);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**str_str;
	size_t	i_array;
	size_t	i;

	i = 0;
	i_array = 0;
	if (!s)
		return (0);
	str_str = malloc_array(s, c);
	if (!str_str)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			str_str[i_array] = malloc_strings(s + i, c);
			i = i + ft_strlen(str_str[i_array]);
			i_array++;
		}
		else
			i++;
	}
	return (str_str);
}
