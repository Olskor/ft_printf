/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olskor <olskor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:49:09 by olskor            #+#    #+#             */
/*   Updated: 2023/02/11 14:49:11 by olskor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_printf("test\n");
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	i = ft_printf("  %d\n", 87423);
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	i = ft_printf("%i\n", 98432);
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	i = ft_printf("%u  \n", -987432);
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	i = ft_printf("kjdsa %x\n", 984243);
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	i = ft_printf("adhjfds %X\n", 984327);
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	i = ft_printf("%p\n", "khfdskjhfd");
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	i = printf("test\n");
	printf("%d\n", i);
	i = printf("  %d\n", 87423);
	printf("%d\n", i);
	i = printf("%i\n", 98432);
	printf("%d\n", i);
	i = printf("%u  \n", -987432);
	printf("%d\n", i);
	i = printf("kjdsa %x\n", 984243);
	printf("%d\n", i);
	i = printf("adhjfds %X\n", 984327);
	printf("%d\n", i);
	i = printf("%p\n", "khfdskjhfd");
	printf("%d\n", i);
}
