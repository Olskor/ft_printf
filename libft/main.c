/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:29:54 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/10 20:26:40 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_printf(" %p ", 0);
	ft_putstr_fd(", ", 1);
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	i = printf(" %p ", 0);
	ft_putstr_fd(", ", 1);
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
}
