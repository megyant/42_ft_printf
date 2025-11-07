/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:33:04 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 14:26:22 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int print_format(char specifier, va_list ap);
int	ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbr_base(long n, int base);

int	ft_printf(const char *format, ...)
{
	va_list ap;
	size_t count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return count;
}

int print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_base((long)(va_arg(ap, int)), 10);
	//else if (specifier == 'u')
		//count += print_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count += ft_putnbr_base((long)(va_arg(ap, unsigned int)), 16);
	//else if (specifier == '%')
		//count += print_percent();
	else
		count += write(1, &specifier, 1);
	return (count);
}








int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int ft_putstr(char *str)
{
	size_t i;

	i = 0;
	while (*str)
	{
		ft_putchar((int)str[i]);
		++i;
	}
	return (i);
}

int ft_putnbr_base(long n, int base)
{
	int count;
	char *hexa;

	hexa = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr_base(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar(hexa[n]));
	else 
	{
		count = ft_putchar(n / base);
		return (count + ft_putnbr_base(n % base, base));
	}
}






int main()
{
	int count;
	count = ft_printf("%x\n", 42);
	ft_printf("The chars written are %d\n");
}