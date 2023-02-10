/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:38:52 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/10 16:25:49 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printnbrbase(unsigned int nbr, int i, char *base, int basesize)
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

static int	nbrlength(unsigned int i, int n)
{
	int	w;

	w = 0;
	while (i >= (unsigned int) n)
	{
		i = i / n;
		w++;
	}
	return (w + 1);
}

int	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	int				n;

	if (!testbase(base))
		return (0);
	i = (unsigned int) nbr;
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		i = (unsigned int) nbr * -1;
	}
	n = 0;
	while (base[n])
		n++;
	printnbrbase(i, nbrlength(i, n), base, n);
	return (nbrlength(i, n));
}
