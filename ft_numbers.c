/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:49:43 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/12 13:00:31 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numbers(int n, int count)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		count = ft_char('-', count);
		if (count == -1)
			return (-1);
		nb *= -1;
	}
	if (nb > 9)
	{
		count = ft_numbers(nb / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_char(nb % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
/*
int	main()
{
	int	count = 0;
	int	n = 123456;
	count = ft_numbers(n, count);
	printf("\n%d", n);
	ft_printf("%d\n", n);
}*/
