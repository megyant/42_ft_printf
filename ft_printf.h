/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:01:04 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/10 08:49:20 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Libraries
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr_base(long n, int base);
int	ft_putnbr_base_upper(long n, int base);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putadress(unsigned long n);
int	ft_print_adress(va_list args);
int	print_format(char specifier, va_list args);
int	ft_printf(const char *format, ...);

#endif