/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:53:32 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/08 13:45:44 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n, int count)
{
	if (n < 0)
		n *= -1;
	if (n > 9)
	{
		count = ft_unsigned(n / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_char(n % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
/*
int	main()
{
	int	count = 0;
	int	n = -1;
	count = ft_unsigned(n, count);
	printf("\n%u", n);
	ft_printf("%u\n", n);
}*/
