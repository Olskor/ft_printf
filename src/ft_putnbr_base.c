/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:38:52 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/16 14:05:23 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static void	printnbrbase(unsigned long nbr, int i, char *base, int basesize)
{
	if (i > 1)
		printnbrbase(nbr / basesize, i - 1, base, basesize);
	ft_putchar_fd(base[nbr % basesize], 1);
}

static int	testbase(char *base)
{
	int	n;
	int	j;

	n = 0;
	j = 0;
	while (base[n])
	{
		if (base[n] == '+' || base[n] == '-')
			return (0);
		while (base[j])
		{
			if (base[n] == base[j] && n != j)
				return (0);
			j++;
		}
		n++;
	}
	if (n < 2)
		return (0);
	return (1);
}

static int	nbrlength(unsigned long i, int n)
{
	int	w;

	w = 0;
	while (i >= (unsigned long) n)
	{
		i = i / n;
		w++;
	}
	return (w + 1);
}

int	ft_putnbr_base(unsigned long nbr, char *base, int size)
{
	unsigned int	i;
	int				n;

	if (!testbase(base))
		return (0);
	i = (unsigned int) nbr;
	n = 0;
	while (base[n])
		n++;
	if (size == 1)
	{
		printnbrbase(i, nbrlength(i, n), base, n);
		return (nbrlength(i, n));
	}
	if (size == 2)
	{
		ft_putstr_fd("0x", 1);
		printnbrbase(nbr, nbrlength(nbr, n), base, n);
		return (nbrlength(nbr, n) + 2);
	}
	return (0);
}
