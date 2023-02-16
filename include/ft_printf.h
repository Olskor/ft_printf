/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jauffret <jauffret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:41:30 by jauffret          #+#    #+#             */
/*   Updated: 2023/02/16 19:50:54 by jauffret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 5  4  3  2  1  0        0
// # ' ' +  .  0  -     nothing

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX "0123456789abcdef"

# include <stdarg.h>

int		ft_putnbr_base(unsigned long nbr, char *base, int size);
int		arg_print(va_list ptr, char c, int space, int numberspace);
char	*ft_uitoa(unsigned int nbr);
int		ft_putspace(int n);
int		ft_bitisset(int n, int pos);
int		ft_bitset(int n, int pos);
int		ft_bitunset(int n, int pos);
int		ft_print_char(char s, int spacetype, int space);
int		ft_print_str(char *s, int spacetype, int space);
int		ft_print_nbr(int n, int spacetype, int space);
int		ft_putstrcheck_fd(char *s, int fd);
int		ft_checkstrlen(char *s);
int		ft_print_unbr(unsigned int n, int spacetype, int space);
int		ft_print_xnbr(unsigned long n, int spacetype, int space, char *base);
int		ft_nbrlength(unsigned long i, int n);

int		ft_printf(const char *s, ...);

#endif