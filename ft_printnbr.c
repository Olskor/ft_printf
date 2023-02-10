/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:55:03 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/10 20:26:34 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	char	*str;
	int		i;

	str = ft_uitoa(n);
	ft_putstr_fd(str, fd);
	i = ft_strlen(str);
	free(str);
	return (i);
}

int	ft_putnnbr_fd(int n, int fd)
{
	char	*str;
	int		i;

	str = ft_itoa(n);
	ft_putstr_fd(str, fd);
	i = ft_strlen(str);
	free(str);
	return (i);
}
