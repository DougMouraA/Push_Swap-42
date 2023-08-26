/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:44:55 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/06/16 13:44:55 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	size;
	const char		*sdupaloc;
	char			*sdup;

	size = ft_strlen(s);
	sdupaloc = (char *)malloc(sizeof(char) * size +1);
	if (!sdupaloc)
		return ((char *) NULL);
	sdup = (char *)sdupaloc;
	while (*s)
	{
		*sdup = *s;
		sdup++;
		s++;
	}
	*sdup = '\0';
	return ((char *)sdupaloc);
}
