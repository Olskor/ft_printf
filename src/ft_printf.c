/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:07:19 by  jauffret         #+#    #+#             */
/*   Updated: 2023/02/16 16:50:53 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	check_spaceplus(char c, int spacetype)
{
	if (c == ' ')
		return (ft_bitset(spacetype, 4));
	if (c == '+')
		return (ft_bitset(spacetype, 3));
	if (c == '#')
		return (ft_bitset(spacetype, 5));
	if (c == '.')
		return (ft_bitset(spacetype, 2));
	if (c == '0')
		return (ft_bitset(spacetype, 1));
	if (c == '-')
		return (ft_bitset(spacetype, 0));
	return (spacetype);
}

int	ft_putspace(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar_fd(' ', 1);
		i++;
	}
	return (n);
}

void	ft_printfbonus(const char *s, va_list ptr, int *i, int *n)
{
	int	spacetype;
	int	space;

	if (s[*i] == '%')
	{
		spacetype = 0;
		space = 0;
		while (s[*i] != 'd' && s[*i] != 's' && s[*i] != 'c' && s[*i] != 'i'
			&& s[*i] != 'x' && s[*i] != 'X' && s[*i] != 'p' && s[*i] != '%'
			&& s[*i] != 'u')
		{
			spacetype = check_spaceplus(s[*i], spacetype);
			if (s[*i] > '0' && s[*i] <= '9' && !space)
			{
				space = ft_atoi(s + *i);
				while (ft_isdigit(s[*i]))
					i++;
			}
			*i += 1;
		}
		*n += arg_print(ptr, s[*i], spacetype, space);
		*i += 1;
	}
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
		ft_printfbonus(s, ptr, &i, &n);
		write(1, s + i, 1);
		i += 1;
		n += 1;
	}
	return (n);
}
