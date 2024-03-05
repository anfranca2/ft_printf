/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfranca <anfranca@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:41:18 by anfranca          #+#    #+#             */
/*   Updated: 2024/02/12 13:06:28 by anfranca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

int	ft_char(const char c, int count);
int	ft_numbers(int n, int count);
int	ft_strings(const char *str, int count);
int	ft_unsigned(unsigned int n, int count);
int	ft_hexalow(unsigned int h, int count);
int	ft_hexaup(unsigned int h, int count);
int	ft_pointers(void *ptr, int count);
int	ft_hexalowptr(unsigned long long h, int count);
int	ft_printf(const char *str, ...);

#endif
