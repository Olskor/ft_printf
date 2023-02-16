/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:02:07 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/16 16:56:23 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	arg_print(va_list ptr, char c, int spacetype, int space)
{
	if (c == 's')
		return (ft_print_str(va_arg(ptr, char *), spacetype, space));
	if (c == 'c')
		return (ft_print_char(va_arg(ptr, int), spacetype, space));
	if (c == 'i')
		return (ft_print_nbr(va_arg(ptr, int), spacetype, space));
	return (0);
}
