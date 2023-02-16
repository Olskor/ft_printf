/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:15:38 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/16 20:35:58 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_pnbr(unsigned long n, int spacetype, int space, char *base)
{
	int		count;

	count = 0;
	if (!n)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	count += 2;
	if (!ft_bitisset(spacetype, 0))
	{
		count += ft_putspace(space - ft_nbrlength(n, 16));
		count += ft_putnbr_base(n, base, 1 + ft_bitisset(spacetype, 5));
		return (count);
	}
	else
	{
		count += ft_putnbr_base(n, base, 1 + ft_bitisset(spacetype, 5));
		count += ft_putspace(space - ft_nbrlength(n, 16));
		return (count);
	}
}
