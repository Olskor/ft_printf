/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:13:05 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/17 17:32:02 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	ft_printf(".%3.s.\n", "21-school.ru");
	printf(".%3.s.\n", "21-school.ru");
}
