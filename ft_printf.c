/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megyant <megyant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:33:04 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/08 22:49:25 by megyant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int count;
	size_t i;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
			count += print_format(format[++i], args);
		else
			count += ft_putchar((int)format[i]);
	}
	va_end(args);
	return (count);
}

int print_format(char specifier, va_list args)
{
    int count;

	count = 0;
    if (specifier == 'c')
        count += ft_putchar(va_arg(args, int));
    else if (specifier == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (specifier == '%')
        count += ft_putchar('%');
    else if (specifier == 'd' || specifier == 'i')
        count += ft_putnbr_base((long)va_arg(args, int), 10);
    else if (specifier == 'x')
        count += ft_putnbr_base((long)va_arg(args, unsigned int), 16);
    else if (specifier == 'X')
        count += ft_putnbr_base_upper((long)va_arg(args, unsigned int), 16);
	else if (specifier == 'u')
		count += ft_putnbr_unsigned((long)va_arg(args, unsigned int));
	else if (specifier == 'p')
		count += ft_print_adress(args);
    else
        count = -1;
    return (count);
}
