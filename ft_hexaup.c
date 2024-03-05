/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:20:00 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/12 13:03:04 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaup(unsigned int h, int count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (h >= 16)
	{
		count = ft_hexaup(h / 16, count);
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
	unsigned int	h = -1600;
	count = ft_hexaup(h, count);
	printf("\n%X", h);
	ft_printf("%X\n", h);
}*/
