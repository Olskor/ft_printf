/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:07:19 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/07 17:50:55 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd('0' + (n % 10), fd);
}

void	arg_print2(va_list ptr, char c)
{
	long	tempi;

	if (c == 'u')
	{
		tempi = va_arg(ptr, long);
		ft_putunbr_fd(tempi, 1);
	}
}

void	arg_print(va_list ptr, char c)
{
	char	*temps;
	long	tempi;
	char	tempc;

	if (c == 's')
	{
		temps = va_arg(ptr, char *);
		ft_putstr_fd(temps, 1);
	}
	if (c == 'c')
	{
		tempc = va_arg(ptr, int);
		ft_putchar_fd(tempc, 1);
	}
	if (c == 'i' || c == 'd')
	{
		tempi = va_arg(ptr, int);
		ft_putnbr_fd(tempi, 1);
	}
	if (c == '%')
		ft_putchar_fd('%', 1);
	arg_print2(ptr, c);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ptr;

	va_start(ptr, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			arg_print(ptr, s[i + 1]);
			i++;
		}
		else
			write(1, s + i, 1);
		i++;
	}
	return (1);
}
