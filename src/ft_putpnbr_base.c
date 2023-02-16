/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:38:52 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/16 20:24:26 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static void	printnbrbase(unsigned long int nbr, int i, char *base, int basesize)
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

int	ft_nbrplength(unsigned long int i, int n)
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

int	ft_putpnbr_base(unsigned long int nbr, char *base, int size)
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
		printnbrbase(i, ft_nbrplength(i, n), base, n);
		return (ft_nbrplength(i, n));
	}
	if (size == 2)
	{
		ft_putstr_fd("0x", 1);
		printnbrbase(nbr, ft_nbrplength(nbr, n), base, n);
		return (ft_nbrplength(nbr, n) + 2);
	}
	return (0);
}
