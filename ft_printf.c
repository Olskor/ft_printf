/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:07:19 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/09 17:42:21 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putunbr_fd(n / 10, fd);
	ft_putchar_fd('0' + (n % 10), fd);
}

static void	ft_puthex_fd(unsigned int n, int fd, int maj)
{
	if (n >= 16)
		ft_puthex_fd(n / 16, fd, maj);
	if (maj)
		ft_putchar_fd(ft_toupper(HEX[(n % 16)]), fd);
	else
		ft_putchar_fd(HEX[(n % 16)], fd);
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
		return (ft_puthex_fd(tempi, 1, 0));
	}
	if (c == 'X')
	{
		tempi = va_arg(ptr, long);
		return (ft_puthex_fd(tempi, 1, 1));
	}
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
		return (ft_putchar_fd(tempc, 1));
	}
	if (c == 'i' || c == 'd')
	{
		tempi = va_arg(ptr, int);
		return (ft_putnbr_fd(tempi, 1));
	}
	if (c == '%')
		return (ft_putchar_fd('%', 1));
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
			n += arg_print(ptr, s[i + 1]);
			i++;
		}
		else
			write(1, s + i, 1);
		i++;
		n++;
	}
	return (i);
}
