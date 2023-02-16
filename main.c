/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:49:09 by olskor            #+#    #+#             */
/*   Updated: 2023/02/16 18:26:37 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

int	main(void)
{
	printf("%i\n",printf(". %c %c .", 'a', 'b'));
	printf("%i\n",printf("%c", '0'));
	printf("%i\n",printf(".%c  .", 25));
	printf("%i\n",printf(".%c    .", 't'));
	printf("%i\n",printf(".   %c.", 'a'));
	printf("%i\n",printf(".%5c.", 'a'));
	printf("%i\n",printf(".%-5c.", 'a'));
	printf("%i\n",printf(".% 5c.", 'a'));
	printf("%i\n",printf(".%+- 5c.", 'a'));
	printf("%i\n",printf(".%- 05c.", 'a'));
	printf("%i\n\n",printf(".%#5c.", 'a'));
	ft_printf("%i\n",ft_printf(". %c %c .", 'a', 'b'));
	ft_printf("%i\n",ft_printf("%c", '0'));
	ft_printf("%i\n",ft_printf(".%c  .", 25));
	ft_printf("%i\n",ft_printf(".%c    .", 't'));
	ft_printf("%i\n",ft_printf(".   %c.", 'a'));
	ft_printf("%i\n",ft_printf(".%5c.", 'a'));
	ft_printf("%i\n",ft_printf(".%-5c.", 'a'));
	ft_printf("%i\n",ft_printf(".% 5c.", 'a'));
	ft_printf("%i\n",ft_printf(".%+- 5c.", 'a'));
	ft_printf("%i\n",ft_printf(".%- 05c.", 'a'));
	ft_printf("%i\n\n",ft_printf(".%#5c.", 'a'));
	printf(".%5s.\n", 0);
	printf(".%-5s.\n", "abc");
	printf(".% 5s.\n", "abc");
	printf(".%+- 5s.\n", "abc");
	printf(".%- 05s.\n", "abc");
	printf(".% .02s.\n", "abc");
	printf(".%.5s.\n", "abc");
	printf(".%#5s.\n\n", "abc");
	ft_printf(".%5s.\n", 0);
	ft_printf(".%-5s.\n", "abc");
	ft_printf(".% 5s.\n", "abc");
	ft_printf(".%+- 5s.\n", "abc");
	ft_printf(".%- 05s.\n", "abc");
	ft_printf(".% .02s.\n", "abc");
	ft_printf(".%.5s.\n", "abc");
	ft_printf(".%#5s.\n\n", "abc");
	printf(".%5i.\n", 'a');
	printf(".%-5i.\n", 'a');
	printf(".% 5i.\n", 'a');
	printf(".%+- 5i.\n", 'a');
	printf(".%- 05i.\n", 'a');
	printf(".%#5i.\n\n", 'a');
	ft_printf(".%5i.\n", 'a');
	ft_printf(".%-5i.\n", 'a');
	ft_printf(".% 5i.\n", 'a');
	ft_printf(".%+- 5i.\n", 'a');
	ft_printf(".%- 05i.\n", 'a');
	ft_printf(".%#5i.\n\n", 'a');
}
