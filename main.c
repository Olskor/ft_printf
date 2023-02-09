/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:29:54 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/09 16:13:38 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("%c\n", 'a');
	ft_printf("%s\n", "lol");
	ft_printf("%p\n", 123456);
	ft_printf("%d\n", 123456);
	ft_printf("%i\n", -456);
	ft_printf("%u\n", -456);
	ft_printf("%x\n", 3012);
	ft_printf("%X\n", 321645);
	ft_printf("%%\n");
}
