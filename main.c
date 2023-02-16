/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:49:09 by olskor            #+#    #+#             */
/*   Updated: 2023/02/16 16:57:28 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf(".%5s.\n", "abc");
	printf(".%-5s.\n", "abc");
	printf(".%- 5s.\n", "abc");
	printf(".%+- 5s.\n", "abc");
	printf(".%- 05s.\n", "abc");
	printf(".%-#5s.\n", "abc");
	ft_printf(".%5s.\n", "abc");
	ft_printf(".%-5s.\n", "abc");
	ft_printf(".%- 5s.\n", "abc");
	ft_printf(".%+- 5s.\n", "abc");
	ft_printf(".%- 05s.\n", "abc");
	ft_printf(".%-#5s.\n", "abc");
}
