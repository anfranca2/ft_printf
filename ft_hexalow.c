/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:54:04 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/17 16:23:22 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalow(unsigned int h, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (h >= 16)
	{
		count = ft_hexalow(h / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_char(base[h % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
/*
int	main()
{
	int	count = 0;
	unsigned int	h = 15;
	count = ft_hexalow(h, count);
	printf("\n%x", h);
	ft_printf("%x\n", h);
}*/
