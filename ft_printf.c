/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:07:19 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/10 20:26:27 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	arg_print3(va_list ptr, char c)
{
	long	tempi;

	if (c == 'p')
	{
		tempi = va_arg(ptr, long);
		if (!tempi)
			return (ft_putstr_fd("(nil)", 1));
		return (ft_putnbr_base(tempi, "0123456789abcdef", 2));
	}
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

static int	arg_print2(va_list ptr, char c)
{
	long	tempi;

	if (c == 'u')
	{
		tempi = va_arg(ptr, long);
		return (ft_putunbr_fd(tempi, 1));
	}
	if (c == 'x')
	{
		tempi = va_arg(ptr, long);
		return (ft_putnbr_base(tempi, "0123456789abcdef", 1));
	}
	if (c == 'X')
	{
		tempi = va_arg(ptr, long);
		return (ft_putnbr_base(tempi, "0123456789ABCDEF", 1));
	}
	return (arg_print3(ptr, c));
}

static int	arg_print(va_list ptr, char c)
{
	char	*temps;
	long	tempi;
	char	tempc;

	if (c == 's')
	{
		temps = va_arg(ptr, char *);
		return (ft_putstr_fd(temps, 1));
	}
	if (c == 'c')
	{
		tempc = va_arg(ptr, int);
		ft_putchar_fd(tempc, 1);
		return (1);
	}
	if (c == 'i' || c == 'd')
	{
		tempi = va_arg(ptr, int);
		return (ft_putnnbr_fd(tempi, 1));
	}
	return (arg_print2(ptr, c));
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		n;
	va_list	ptr;

	va_start(ptr, s);
	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			n += arg_print(ptr, s[i + 1]) - 1;
			i++;
		}
		else
			write(1, s + i, 1);
		i++;
		n++;
	}
	return (n);
}
