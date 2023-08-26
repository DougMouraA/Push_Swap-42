/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-a <dmoura-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:33:30 by dmoura-a          #+#    #+#             */
/*   Updated: 2022/07/13 16:33:30 by dmoura-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printif(const char a, va_list listpa)
{
	if (a == 'c')
		return (ft_putchar(va_arg(listpa, int)));
	else if (a == '%')
		return (ft_putchar('%'));
	else if (a == 's')
		return (ft_putstr(va_arg(listpa, char *)));
	else if (a == 'd' || a == 'i')
		return (ft_putnbr(va_arg(listpa, int)));
	else if (a == 'u')
		return (ft_putnbr_u(va_arg(listpa, unsigned int)));
	else if (a == 'x')
		return (ft_printhex(va_arg(listpa, unsigned int), "0123456789abcdef"));
	else if (a == 'X')
		return (ft_printhex(va_arg(listpa, unsigned int), "0123456789ABCDEF"));
	else if (a == 'p')
		return (ft_printptr(va_arg(listpa, void *), "0123456789abcdef"));
	else
		return (0);
}

int	ft_printf(const char *a, ...)
{
	va_list	listpa;
	size_t	i;
	size_t	size;

	va_start (listpa, a);
	i = 0;
	size = 0;
	while (a[i] != '\0')
	{
		if (a[i] == '%')
		{
			size = size + ft_printif(a[i + 1], listpa);
			i++;
		}
		else
			size = size + ft_putchar(a[i]);
		i++;
	}
	return (size);
}
