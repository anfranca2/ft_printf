/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:35:09 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/12 13:05:18 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strings(const char *str, int count)
{
	int	size;

	size = 0;
	if (!str)
		str = "(null)";
	while (str[size])
	{
		count = ft_char(str[size], count);
		if (count == -1)
			return (-1);
		size++;
	}
	return (count);
}
/*
int	main()
{
	int	count = 0;
	const char	*str = "keloke";
	printf("%s\n", str);
	ft_printf("%s", str);
}*/
