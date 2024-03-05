/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:56:24 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/12 13:04:06 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(const char c, int count)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	count += 1;
	return (count);
}
/*
int	main()
{
	int	count = 0;
	const char	c = 'e';
	printf("\n%c", c);
	ft_printf("%c\n", c);
}*/
