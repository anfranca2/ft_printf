/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:55:30 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/08 13:44:37 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointers(void *ptr, int count)
{
	count = ft_strings("0x", count);
	if (count == -1)
		return (-1);
	count = ft_hexalowptr((unsigned long long)ptr, count);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_hexalowptr(unsigned long long h, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (h >= 16)
	{
		count = ft_hexalowptr(h / 16, count);
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
	void	*ptr = "keloke";
	count = ft_pointers(ptr, count);
	printf("\n%p", ptr);
	ft_printf("%p\n", ptr);
}*/
