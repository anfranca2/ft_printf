/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:40:03 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/08 13:47:09 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char const c, va_list args, int count)
{
	if (c == 'c')
		count = ft_char(va_arg(args, int), count);
	else if (c == 's')
		count = ft_strings(va_arg(args, char *), count);
	else if (c == 'p')
		count = ft_pointers(va_arg(args, void *), count);
	else if (c == 'd' || c == 'i')
		count = ft_numbers(va_arg(args, int), count);
	else if (c == 'u')
		count = ft_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'x')
		count = ft_hexalow(va_arg(args, unsigned int), count);
	else if (c == 'X')
		count = ft_hexaup(va_arg(args, unsigned int), count);
	else if (c == '%')
		count = ft_char('%', count);
	else
		count = -1;
	return (count);
}

static int	checking(char const *s, va_list args, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			c = ft_format((char)s[i], args, c);
			if (c == -1)
				return (-1);
		}
		else
		{
			c = ft_char(s[i], c);
			if (c == -1)
				return (-1);
		}
		i++;
	}
	return (c);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		c;

	c = 0;
	va_start(args, s);
	c = checking(s, args, c);
	va_end(args);
	return (c);
}
